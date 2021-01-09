#pragma once
#ifndef STATICSTACK_H
#define STATICSTACK_H

class Stack {

   public:
      // pure virtual functions
      virtual bool 	isempty() = 0;
      virtual bool 	isfull() = 0;     
      virtual void 	push(int) = 0;
	  virtual int 	pop() = 0;
      virtual int 	peak() = 0;
      virtual void 	print() = 0;
      
      class Stack_Overflow{};
      class Stack_Underflow{};
};

class Array_Stack : public Stack {

	private:
		int 	*vector;
		int 	top;
		int 	max;
		
	public:
		// constructors
		Array_Stack(int max = 100);
		Array_Stack(const Array_Stack&);
		// destructor
		~Array_Stack();
		//methods
		virtual bool	isempty();
		virtual bool	isfull();
		virtual void 	push(int);
		virtual int 	pop();
		virtual int 	peak();
		virtual void 	print();
};

#endif
// eOF StatickStack.h

