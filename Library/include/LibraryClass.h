#pragma once
#include <Mouse.h>
namespace Library
{

	class LibraryClass {

	public:
		LibraryClass() {
		}


	public:
		__declspec(dllexport) void Print();

		__declspec(dllexport) void __TestMethod();
	};

}

