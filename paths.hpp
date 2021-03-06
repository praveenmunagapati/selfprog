#ifndef __paths__
#define __paths__

#include <string>

const std::string PATH_PROG      = "/home/au/dev/selfprog/";
const std::string PATH_TMP       = "/tmp/";
const std::string PATH_CELL      = PATH_TMP+"cell/";
const std::string PATH_REPRODUCE = PATH_CELL + "reproduce/";
const std::string PATH_TRAINING  = PATH_PROG + "training/";

void setup_dirs( void );
void define_sample_input( void );

#endif
