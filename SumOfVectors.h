#ifndef SUMOFVECTORS_H
#define SUMOFVECTORS_H

#include <vector>
#include <string>
#include <sstream>

typedef std::vector<std::string> StrVec;

StrVec operator+ (const StrVec& first, const StrVec& second) {
	StrVec third;

	third.resize(first.size());
	
	for (size_t i = 0; i < first.size(); i++)
	{
		std::ostringstream ostr;
		ostr << first[i] << " "<< second[i];
		third[i] = ostr.str();
	}


	return third;
}
#endif // !SUMOFVECTORS_H