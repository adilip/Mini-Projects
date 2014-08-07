#ifndef SAFE_ZONE_H_
#define SAFE_ZONE_H_

struct safe_zone {
	coordinate location;
	double radius;
	safe_zone(coordinate position, double range) {
		location = position;
		radius = range;
	}
	safe_zone() {
		radius = 0;
	}
};





#endif
