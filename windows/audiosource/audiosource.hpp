#ifndef AudioSource_HEADER
#define AudioSource_HEADER

#include <string>


class AudioSource {
public:
	int _;
	virtual std::string audioSourceType() = 0;
};


#endif