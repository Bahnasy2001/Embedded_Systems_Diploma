/* linker_script_cortexM3
Eng: Hassan Bahnasy
*/

MEMORY
{
flash(RX) : ORIGIN = 0x08000000 , LENGTH = 128k
sram(RWX) : ORIGIN = 0x20000000 , LENGTH = 20k
}

SECTIONS
{
		.text : {
			*(.vectors*)
			*(.text*)
			*(.rodata)
			_E_text = . ;
	} > flash

	.data : {
			_S_DATA = . ;
			*(.data)
			*(.data.*)
			_E_DATA = . ;
	} >sram AT> flash

	.bss : {
			_S_bss = . ;
			*(.bss*)
			. = ALIGN(4);
			_E_bss = . ;
			.  = . + 0x1000 ;
			_heap_end = . ;
			.  = . + 0x1000 ;
			_stack_top = . ;
	} > sram
}