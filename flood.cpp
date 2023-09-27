//
//  flood.cpp
//  name: 
//
//
//  assume that in the initial elevation grid the sea points are
//  represented as NODATA;


#include "flood.hpp"


#include <queue>
#include <limits>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
















/*  Simulates the SLR flooding with a sea level of <rise> starting
    from the points in the queue, which are all assumed to represent
    sea.
    
*/ 
 std::queue<point> compute_flood_from_queue(const Grid* elev_grid, Grid* flooded_grid,
					    const float rise, 
					    std::queue<point>& queue) {
   
  assert(elev_grid && flooded_grid);
  std::queue<point> next_queue; 
  
 
}













/*
  simulates SLR flooding with rise = rise_incr, 2*rise_incr, ..., until rise > rise_end
 */
void compute_flood_incrementally(const Grid* elev_grid, const float rise_incr,
				 const float rise_end,  Grid* flooded_grid) {
  
  //must exist 
  assert(flooded_grid && elev_grid); 
 
  printf("compute SLR flooding up to slr=%.1f (incr=%.1f)\n", rise_end, rise_incr);

 
}  
