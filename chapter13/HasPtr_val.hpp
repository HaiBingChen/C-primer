#ifndef __HASPTR_HPP
#define __HASPTR_HPP

#include <iostream>

class HasPtr{
public:
	HasPtr(int &p, int i):ptr(new int(p)), val(i)
	{ }

	HasPtr(const HasPtr &orig_p):ptr(new int (*orig_p.ptr)), val(orig_p.val)
	{ }

	HasPtr &operator=(const HasPtr &orig_p)
	{
		*ptr = *orig_p.ptr;
		val = orig_p.val;

		return *this;
	}

	~HasPtr()
	{ 
		delete ptr;
	}

	int *get_ptr() const
	{ return ptr; }

	int get_int() const
	{ return val; }

	void set_ptr(int *p)
	{ 
		ptr = p; 
	}

	void set_int(int i)
	{ val = i; }

	void set_ptr_val(int val)
	{ *ptr = val; }

	int get_ptr_val() const
	{ return *ptr; }

private:
	int *ptr;
	int val;
};

#endif
