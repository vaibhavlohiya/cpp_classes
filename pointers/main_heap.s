	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 5
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	wzr, [x29, #-4]
	mov	x0, #4                          ; =0x4
	bl	__Znam
	str	x0, [sp, #16]
	ldr	x8, [sp, #16]
	str	wzr, [x8]
	mov	w8, #8                          ; =0x8
	str	w8, [sp, #12]
	str	wzr, [sp, #8]
	ldr	x8, [sp, #16]
	str	x8, [sp]                        ; 8-byte Folded Spill
	cbz	x8, LBB0_2
	b	LBB0_1
LBB0_1:
	ldr	x0, [sp]                        ; 8-byte Folded Reload
	bl	__ZdaPv
	b	LBB0_2
LBB0_2:
	adrp	x0, __ZNSt3__13cinE@GOTPAGE
	ldr	x0, [x0, __ZNSt3__13cinE@GOTPAGEOFF]
	bl	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
