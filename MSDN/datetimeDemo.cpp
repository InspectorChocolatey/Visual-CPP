/*
 * references:
 * https://msdn.microsoft.com/en-us/library/system.datetime.now(v=vs.110).aspx?cs-save-lang=1&cs-lang=cpp#code-snippet-1
 *
 *
 */

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace System::Globalization;

void msdnExample();

void msdnExample() 
{
	DateTime localDate = DateTime::Now;
	
	array<String^>^ cultureNames = { 
		"en-US", "en-GB", "fr-FR", "de-DE", "ru-RU" 
	};

	for each (String^ cultureName in cultureNames) 
	{
		CultureInfo^ culture = gcnew CultureInfo(cultureName);
		Console::WriteLine(
			"{0}: {1}", 
			cultureName,
			localDate.ToString(culture)
		);
	}
}

int main(array<System::String ^> ^args)
{
	msdnExample();
	std::cin.get();
    return 0;
}
