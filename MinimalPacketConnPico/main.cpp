#include "pico/stdlib.h"
#include "hardware/uart.h"
#include "hardware/irq.h"

#include <list>
#include "conn/minicom/minicom.h"


int main() {

    Minicom minicom;
    
    minicom.init();

    while (1) {
        minicom.puts("Hello from hell, ");
        sleep_ms(1000);
        //tight_loop_contents();
    }
}
