#include <iostream>
#include "Message.hpp"
#include "Folder.hpp"

using namespace std;

Message::Message(const Message &msg):
	contents(msg.contents), folders(msg.folders)
{
	put_msg_in_folders(folders);
}

void Message::put_msg_in_folders(const set<Folder *> &fol)
{
	for(set<Folder *>::const_iterator it=fol.begin();
		it!=fol.end(); ++it){
		if((*it)->add_msg(this)){
			cout << "put_msg_in_folders err" << endl;
			break;
		}
	}
}

Message &Message::operator=(const Message &msg)
{
	if(&msg != this){
		remove_msg_from_folders();
		contents = msg.contents;
		folders = msg.folders;
		put_msg_in_folders(folders);
	}

	return *this;
}

void Message::remove_msg_from_folders()
{
	for(set<Folder *>::const_iterator it=folders.begin();
				it!=folders.end(); ++it){
		if((*it)->rem_msg(this)){
			cout << "remove_msg_from_folders err" << endl;
			break;
		}
	}
}

Message::~Message()
{
	remove_msg_from_folders();
}

int Message::add_fldr(Folder *fldr)
{
	pair<set<Folder *>::iterator, bool> ret;

	ret = folders.insert(fldr);

	if(ret.second == false){
		cout << "insert fldr error" << endl;
		return -1;
	}

	return 0;
}

int Message::rem_fldr(Folder *fldr)
{
	set<Folder *>::size_type ret;

	ret = folders.erase(fldr);

	if(ret == 0){
		cout << "erase fldr error" << endl;
		return -1;
	}

	return 0;
}

int Message::save(Folder &fldr)
{
	if(add_fldr(&fldr)){
		cout << "save add fldr err" << endl;
		return -1;
	}

	if(fldr.add_msg(this)){
		cout << "save add msg err" << endl;
		return -1;
	}

	return 0;
}

int Message::remove(Folder &fldr)
{
	if(rem_fldr(&fldr)){
		cout << "remove rem fldr err" << endl;
		return -1;
	}

	if(fldr.rem_msg(this)){
		cout << "remove re msg err" << endl;
	}

	return 0;
}
