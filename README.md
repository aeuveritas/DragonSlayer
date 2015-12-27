# kOdin
"kOdin" is a custom 64 bits OS which is written in C++.
"kOdin" is under construction, but it will be a unix-like and
most POSIX-compliant.

# License
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

# Source tree
* .<br>
* DOCUMENTS<br>
* Makefile<br>
* README.md<br>
* kOdin.kdev4<br>
* run.sh<br>
* bootloader<br>
  * BootLoader.asm<br>
  * Makefile<br>
* kernel32<br>
  * Makefile<br>
  * asmUtils.asm<br>
  * cpu.hpp<br>
  * cpu.cpp<br>
  * elf_i386.x<br>
  * entry.s<br>
  * main.cpp<br>
  * memory.cpp<br>
  * memory.hpp<br>
  * page.hpp<br>
  * pageManager.cpp<br>
  * pageManager.hpp<br>
  * types.hpp<br>
  * utils.cpp<br>
  * utils.hpp<br>
* kernel64<br>
  * DT.cpp<br>
  * DT.hpp<br>
  * DTR.hpp<br>
  * GDT.cpp<br>
  * GDT.hpp<br>
  * IDT.cpp<br>
  * IDT.hpp<br>
  * IH.cpp<br>
  * IH.hpp<br>
  * Makefile<br>
  * PIC.cpp<br>
  * PIC.hpp<br>
  * asmISR.asm<br>
  * asmISR.hpp<br>
  * asmUtils.asm<br>
  * dInterrupt.hpp<br>
  * dSegment.hpp<br>
  * elf_x86_64.x<br>
  * entry.s<br>
  * keyData.hpp<br>
  * keyboard.cpp<br>
  * keyboard.hpp<br>
  * main.cpp<br>
  * port.cpp<br>
  * port.hpp<br>
  * queue.cpp<br>
  * queue.hpp<br>
  * shell.cpp<br>
  * shell.hpp<br>
  * types.hpp<br>
  * utils.cpp<br>
  * utils.hpp<br>
* utility<br>
  * Makefile<br>
  * imageMaker<br>
    * Makefile<br>
    * imageMaker.c<br>


# Build history
[0. kOdin](https://aeuveritas.github.io/kOdin/)<br>
[1. Setting Build Environment for kOdin](https://aeuveritas.github.io/setting-for-dl/)<br>
[2. Basic Knowledge for IA 64 Bit Processor](https://aeuveritas.github.io/Basic-Knowledge-for-IA-64-bit-processor/)<br>
[3. Booting & Bootloader](https://aeuveritas.github.io/Booting-and-Bootloader/)<br>
[4. Implementing Bootloader](https://aeuveritas.github.io/Implementing-Bootloader/)<br>
[5. Loading the OS image](https://aeuveritas.github.io/Loading-OS/)<br>
[6. Entering the Protected Mode](https://aeuveritas.github.io/Entering-the-Protected-Mode/)<br>
[7. Writing a C++ Kernel Code](https://aeuveritas.github.io/Writing-a-C++-Kernel-Code/)<br>
[8. Initializing Memory](https://aeuveritas.github.io/Initializing-memory/)<br>
[9. Activating Paging](https://aeuveritas.github.io/Activating-Paging/)<br>
[10. Switching to the IA-32e Mode](https://aeuveritas.github.io/Switching-to-the-IA-32e-Mode/)<br>
[11. Adding Keyboard Driver](https://aeuveritas.github.io/Adding-Keyboard-Driver/)<br>
[12. Preparing for Interrupt](https://aeuveritas.github.io/Preparing-for-Interrupt/)<br>
[13. Adding an Interrupt Handler](https://aeuveritas.github.io/Adding-an-Interrupt-Handler/)<br>
[14. Upgrading to an Interrupt Based Keyboard Driver](http://aeuveritas.github.io/Upgrading-to-an-Interrupt-Based-Keyboard-Driver/)<br>
