
target_sources(libxapian PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/geoencode.h
	${CMAKE_CURRENT_LIST_DIR}/geoencode.cc
	${CMAKE_CURRENT_LIST_DIR}/latlongcoord.cc 
	${CMAKE_CURRENT_LIST_DIR}/latlong_distance_keymaker.cc 
	${CMAKE_CURRENT_LIST_DIR}/latlong_metrics.cc 
	${CMAKE_CURRENT_LIST_DIR}/latlong_posting_source.cc)
