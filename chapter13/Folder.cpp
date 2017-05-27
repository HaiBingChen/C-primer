#include <iostream>
#include "Message.hpp"
#include "Folder.hpp"

using namespace std;

Folder::Folder(const Folder &fldr):
	messages(fldr.messages)
{
	put_fldr_in_message(messages);
}

void Folder::put_fldr_in_message(const set<Message *> &msg)
{
	for(set<Message *>::const_iterator it=msg.begin();
				it!=msg.end(); ++it){
		if((*it)->add_fldr(this)){
			cout << "put_fldr_in_message err " << endl;
			break;
		}
	}
}

Folder &Folder::operator=(const Folder &fldr)
{
	if(&fldr != this){
		remove_fldr_from_message();
		messages=fldr.messages;
		put_fldr_in_message(messages);
	}

	return *this;
}

void Folder::remove_fldr_from_message()
{
	for(set<Message *>::const_iterator it=messages.begin();
				it!=messages.end(); ++it){
		if((*it)->rem_fldr(this)){
			cout << "remove_fldr_from_message err" << endl;
			break;
		}
	}
}

Folder::~Folder()
{
	remove_fldr_from_message();
}

int Folder::add_msg(Message *msg)
{
	pair<set<Message *>::iterator, bool> ret;

	ret = messages.insert(msg);

	if(ret.second == false){
		cout << "insert msg error" << endl;
		return -1;
	}

	return 0;
}

int Folder::rem_msg(Message *msg)
{
	set<Message *>::size_type ret;

	ret=messages.erase(msg);

	if(ret == 0){
		cout << "erase msg error" << endl;
		return -1;
	}

	return 0;
}

int Folder::save(Message &msg)
{
	if(add_msg(&msg)){
		cout << "save add msg err" << endl;
		return -1;
	}

	if(msg.add_fldr(this)){
		cout << "save add fldr err" << endl;
		return -1;
	}

	return 0;
}

int Folder::remove(Message &msg)
{
	if(rem_msg(&msg)){
		cout << "remove rem msg err" << endl;
		return -1;
	}

	if(msg.rem_fldr(this)){
		cout << "remove re fldr err" << endl;
	}

	return 0;
}

