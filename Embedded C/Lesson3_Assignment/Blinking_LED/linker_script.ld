/* linker_script_cortexM3
Eng: Hassan Bahnasy
*/

MEMORY
{
	flash(RX) : ORIGIN = 0x08000000, LENGTH = 128K
	sram(RWX) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
	.text : {
			*(.vectors*)
			*(.text*)
			*(.rodata)
	}> flash

	.data : {
			*(.data)
	}> sram AT>flash

	.bss : {
			*(.bss)
	}> sram
}