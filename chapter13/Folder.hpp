#ifndef __FOLDER_HPP
#define __FOLDER_HPP

#include <iostream>
#include <set>

class Message;

class Folder{
public:
	friend class Message;

	Folder()
	{}

	Folder(const Folder &);

	Folder &operator=(const Folder &);

	~Folder();

	void put_fldr_in_message(const std::set<Message *> &);
	void remove_fldr_from_message();

	int save(Message &);
	int remove(Message &);
private:

	std::set<Message *> messages;

	int add_msg(Message *);
	int rem_msg(Message *);
};

#endif
