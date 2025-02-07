<div align="center">

</br>
</br>

<strong>ft_printf - Custom Printf Implementation 🖨️</strong>

<p>ft_printf is a custom implementation of the standard printf function in C. This project provided a deeper understanding of formatted output, variadic functions, and efficient buffer management.</p>

</br>

</div>

## 🚀 Project Overview

ft_printf is a recreation of the standard printf function in C, built from scratch. This project helped me understand how formatted output works internally, including handling different format specifiers, managing buffers efficiently, and working with variadic arguments.

</br>

## 🏆 Key Takeaways

- **Variadic Functions:** Learned how to use `stdarg.h` to handle variable-length arguments dynamically.
- **Buffer Management:** Implemented efficient buffering to minimize unnecessary write operations.
- **Format Specifiers:** Gained an understanding of parsing and handling `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%p`.
- **Modularity & Optimization:** Structured the function to be reusable and optimized for performance.

</br>

## 📂 Files and Functions

Below is a list of the implemented functions along with their descriptions:

</br>

### 🖨️ Core ft_printf Implementation

- `ft_printf.c` - Main function handling formatted output and variadic arguments.
- `ft_parser.c` - Parses format specifiers and directs them to appropriate handlers.
- `ft_format_utils.c` - Utility functions for processing and formatting output.
- `ft_buffer.c` - Manages output buffering to optimize write operations.

</br>

### 🔢 Format Specifiers Handling

- `%c` - Prints a single character.
- `%s` - Prints a string.
- `%p` - Prints a memory address.
- `%d` / `%i` - Prints a signed integer.
- `%u` - Prints an unsigned integer.
- `%x` / `%X` - Prints a hexadecimal number (lowercase/uppercase).

</br>

### 🛠️ Utility Functions

- `ft_putchar.c` - Writes a character to the standard output.
- `ft_putstr.c` - Writes a string to the standard output.
- `ft_putnbr.c` - Converts and prints an integer.
- `ft_putnbr_upf.c` - Converts an unsigned integer to a string.
- `ft_printaddress.c` - Converts a number to a hexadecimal string.

</br>

🎯 Conclusion
Building ft_printf from scratch was an invaluable experience that deepened my understanding of C programming, variadic functions, and buffer management. This project reinforced my problem-solving skills and improved my ability to write optimized, modular code!

</br>
