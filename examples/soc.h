#include "systemc.h"

// A trivial SystemC example

SC_MODULE(SoC)
{
  sc_in_clk clk;

  unsigned int cycles_remaining;

  void update() {
    cout << "@" << sc_time_stamp() << ": cycles_remaining:" << cycles_remaining-- << endl;
    if (cycles_remaining == 0) {
      sc_stop();
    }
  }
  
 SC_CTOR(SoC) : cycles_remaining(10)
  {
    SC_METHOD(update);
    sensitive << clk.pos();
  }
};

