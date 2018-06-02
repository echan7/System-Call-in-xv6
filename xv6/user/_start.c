#include "user.h"
#include "types.h"
#include "defs.h"
#include "param.h"
#include "mmu.h"
#include "proc.h"
#include "x86.h"

extern main();
int _start(int argc, char** argv){
	int n = main(argc, argv);
	return n;
}
