#ifndef LIGHTPACKET_H
#define LIGHTPACKET_H


#define span_FEATURE_MAKE_SPAN 1

#include <nonstd/span.hpp>

#include <valoserveri/DMXController.h>


namespace valoserveri {


struct LightColor {
	unsigned int  index;
	Color         color;
};


struct LightPacket {
	std::string              tag;
	std::vector<LightColor>  lights;
};


LightPacket parseLightPacket(const nonstd::span<const char> &packet);


}  // namespace valoserveri


#endif  // LIGHTPACKET_H
