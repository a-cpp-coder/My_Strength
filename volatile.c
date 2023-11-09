/* Finally, still it is */

#define unsigned_int uint32_t

// in Embedded C programming , the "volatile" keywork is used to inform the compiler that
// a particular variable can change its value at any time without any action being taken by the code.

// Important when working with Hardware Registers
//                             Memory-mapped I/O 
// because these values can change asynchronously due to external factors: HW interrupts, without the program's knowledge

/* 1. Prevent Optimization */
// prevent the compiler from optimizing away reads or write to that variable
//                           (may optimize with assumption that the variable's value will not change during program execution)
//                           => may lead to incorrect behavior in Embedded systems where variables are updated by HW events or other external factors
\\


/* 2.Use Cases */
// HW Register
// Represent various aspects of the MicroController or Peripheral behavior, it's common to declare them as volatile

// Eg: MEMORY-Mapped GPIO Port A
volatile unit32_t GPIO_PORTA = (unit32_t) 0x40020000;

// in this case, "volatile" indicate that the compiler should not optimized away any reads or writes to the GPIO_PORTA "Register"