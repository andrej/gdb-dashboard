/* This simple program contains a class with generics. To obtain breakpoint
 * numbers with a period ("sub-breakpoints"), compile this, run it in gdb and set
 * a breakpoint at program_with_generics.cpp:20.
 *
 * info breakpoints will then print something like
 * Num   Type ...
 * 1     breakpoint ...
 * 1.1   ...
 * 1.2   ...
 * for the float and double variants of the class. The interesting part is the
 * breakpoint number containing a period.
 */

#include <iostream>

template <class T>
class example {
	public:
		example<T>() {
			std::cout << "Hi.\n";
		}
};

int main(int argc, char** argv) {
	example<double> a;
	example<float> b;
}
