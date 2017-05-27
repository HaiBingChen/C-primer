#ifndef __MESSAGE_HPP
#define __MESSAGE_HPP

#include <iostream>
#include <set>

class Folder;

class Message{
public:
	friend class Folder;

	Message(const std::string &str=""):
		contents(str){}

	Message(const Message &);

	Message &operator=(const Message &);

	~Message();

	int save(Folder &);

	int remove(Folder &);

private:
	std::string contents;
	std::set<Folder *> folders;
	
	void put_msg_in_folders(const std::set<Folder *> &);
	void remove_msg_from_folders();

	int add_fldr(Folder *fld);

	int rem_fldr(Folder *);
};

#endif
