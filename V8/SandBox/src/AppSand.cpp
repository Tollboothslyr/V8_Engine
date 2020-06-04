#include <V8.h>


class SandBox : public V8::Application {
public:
	SandBox() { //constructor

	}
	~SandBox() { //destructor 

	}
};


int main()
{
	SandBox* sandbox = new SandBox();   /*a usage of dynamic memory...				its saying: at an allocated location in memory make decalre that SandBox Exists, in its entirety.
																															run the SandBox at the location of sandbox and then Clear it because why do we need it after we ran it?

																 a helpful link https://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm#:~:text=You%20can%20allocate%20memory%20at,operator%20is%20called%20new%20operator.
																"new" allows for a variable to be allocated to memory
																if nolonger required, we can "delete" the allocated variable from memory.
																*/
																
	sandbox->run();
	delete sandbox;				//clear cache
}





