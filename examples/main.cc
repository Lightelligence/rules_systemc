#include "systemc.h"

#include "soc.h"

int sc_main(int argc, char* argv[])
{
  sc_clock clk("clk", 1, SC_NS);
  SoC soc("SoC");
  soc.clk(clk);
  sc_start();
  return 0;
}
