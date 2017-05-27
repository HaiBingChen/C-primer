#ifndef __HASPTR_HPP
#define __HASPTR_HPP

#include <iostream>

class HasPtr;

class U_ptr{
	friend class HasPtr;
	int *ip;
	size_t use;
	U_ptr(int *p):ip(p), use(1)
	{}

	~U_ptr()
	{
		std::cout << "~U_ptr()" << std::endl;
		//delete ip;
	}
};

class HasPtr{
public:
	HasPtr(int *p, int i):ptr(new U_ptr(p)), val(i)
	{}

	HasPtr(const HasPtr &orig_P):ptr(orig_P.ptr), val(orig_P.val)
	{ ++ptr->use; }

	HasPtr &operator=(const HasPtr &orig_p)
	{
		std::cout << "HasPtr() &operator ptr->use:" << ptr->use << std::endl;
	
		++orig_p.ptr->use;

		if(--ptr->use == 0){
			delete ptr;
		}

		ptr = orig_p.ptr;
		val = orig_p.val;

		return *this;
	}

	~HasPtr()
	{ 
		std::cout << "~HasPtr() ptr->use:" << ptr->use << std::endl;
		if(--ptr->use == 0){
			std::cout << "delete ptr" << std::endl;
			delete ptr;
		}
	}

	int *get_ptr() const
	{ return ptr->ip; }

	int get_int() const
	{ return val; }

	void set_ptr(int *p)
	{ ptr->ip = p; }

	void set_int(int i)
	{ val = i; }

	void set_ptr_val(int val)
	{ *ptr->ip = val; }

	int get_ptr_val() const
	{ return *ptr->ip; }

private:
	U_ptr *ptr;
	int val;
};

#endif
