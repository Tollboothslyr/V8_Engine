#pragma once

// i believe this is now the Dynamic library that takes from core and application.h and makes them a dl when compiling


//add this line to additonal include directories to allow for the usage of    < angle brackets>  when #importing   >>>>>>>>>>>>>>   $(SolutionDir)Hazel\src;
//^^^ this is not a thing we write in code,(right now) but an option under "sandbox properties on VS 2019"


// For use from V8 apps respectivley

#include "V8/core.h"
#include "V8/Application.h"



