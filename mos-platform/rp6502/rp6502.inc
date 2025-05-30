; Picocomputer 6502 general defines

; RIA UART
RIA_READY       = $FFE0 ; TX=$80 RX=$40
RIA_TX          = $FFE1
RIA_RX          = $FFE2

; VSYNC from PIX VGA
RIA_VSYNC       = $FFE3

; RIA XRAM portal 0
RIA_RW0         = $FFE4
RIA_STEP0       = $FFE5
RIA_ADDR0       = $FFE6

; RIA XRAM portal 1
RIA_RW1         = $FFE8
RIA_STEP1       = $FFE9
RIA_ADDR1       = $FFEA

; RIA OS fastcall
RIA_XSTACK      = $FFEC
RIA_ERRNO       = $FFED
RIA_OP          = $FFEF
RIA_IRQ         = $FFF0
RIA_SPIN        = $FFF1
RIA_BUSY        = $FFF2 ; Bit $80
RIA_A           = $FFF4
RIA_X           = $FFF6
RIA_SREG        = $FFF8

; RIA OS operation numbers
RIA_OP_EXIT               = $FF
RIA_OP_ZXSTACK            = $00
RIA_OP_XREG               = $01
RIA_OP_PHI2               = $02
RIA_OP_CODEPAGE           = $03
RIA_OP_LRAND              = $04
RIA_OP_STDIN_OPT          = $05
RIA_OP_CLOCK              = $0F
RIA_OP_CLOCK_GETRES       = $10
RIA_OP_CLOCK_GETTIME      = $11
RIA_OP_CLOCK_SETTIME      = $12
RIA_OP_CLOCK_GETTIMEZONE  = $13
RIA_OP_OPEN               = $14
RIA_OP_CLOSE              = $15
RIA_OP_READ_XSTACK        = $16
RIA_OP_READ_XRAM          = $17
RIA_OP_WRITE_XSTACK       = $18
RIA_OP_WRITE_XRAM         = $19
RIA_OP_LSEEK              = $1A
RIA_OP_UNLINK             = $1B
RIA_OP_RENAME             = $1C

; 6522 VIA
VIA             = $FFD0        ; VIA base address
VIA_PB          = VIA+$0       ; Port register B
VIA_PA1         = VIA+$1       ; Port register A
VIA_PRB         = VIA+$0       ; *** Deprecated ***
VIA_PRA         = VIA+$1       ; *** Deprecated ***
VIA_DDRB        = VIA+$2       ; Data direction register B
VIA_DDRA        = VIA+$3       ; Data direction register A
VIA_T1CL        = VIA+$4       ; Timer 1, low byte
VIA_T1CH        = VIA+$5       ; Timer 1, high byte
VIA_T1LL        = VIA+$6       ; Timer 1 latch, low byte
VIA_T1LH        = VIA+$7       ; Timer 1 latch, high byte
VIA_T2CL        = VIA+$8       ; Timer 2, low byte
VIA_T2CH        = VIA+$9       ; Timer 2, high byte
VIA_SR          = VIA+$A       ; Shift register
VIA_CR          = VIA+$B       ; Auxiliary control register
VIA_PCR         = VIA+$C       ; Peripheral control register
VIA_IFR         = VIA+$D       ; Interrupt flag register
VIA_IER         = VIA+$E       ; Interrupt enable register
VIA_PA2         = VIA+$F       ; Port register A w/o handshake

; Traditional RIA_ERRNO values
RIA_ENOENT   = 1
RIA_ENOMEM   = 2
RIA_EACCES   = 3
RIA_ENODEV   = 4
RIA_EMFILE   = 5
RIA_EBUSY    = 6
RIA_EINVAL   = 7
RIA_ENOSPC   = 8
RIA_EEXIST   = 9
RIA_EAGAIN   = 10
RIA_EIO      = 11
RIA_EINTR    = 12
RIA_ENOSYS   = 13
RIA_ESPIPE   = 14
RIA_ERANGE   = 15
RIA_EBADF    = 16
RIA_ENOEXEC  = 17
RIA_EUNKNOWN = 18

; Enhanced RIA_ERRNO values from FatFs
FR_OK                  = 32 ; Succeeded
FR_DISK_ERR            = 33 ; A hard error occurred in the low level disk I/O layer
FR_INT_ERR             = 34 ; Assertion failed
FR_NOT_READY           = 35 ; The physical drive cannot work
FR_NO_FILE             = 36 ; Could not find the file
FR_NO_PATH             = 37 ; Could not find the path
FR_INVALID_NAME        = 38 ; The path name format is invalid
FR_DENIED              = 39 ; Access denied due to prohibited access or directory full
FR_EXIST               = 40 ; Access denied due to prohibited access
FR_INVALID_OBJECT      = 41 ; The file/directory object is invalid
FR_WRITE_PROTECTED     = 42 ; The physical drive is write protected
FR_INVALID_DRIVE       = 43 ; The logical drive number is invalid
FR_NOT_ENABLED         = 44 ; The volume has no work area
FR_NO_FILESYSTEM       = 45 ; There is no valid FAT volume
FR_MKFS_ABORTED        = 46 ; The f_mkfs() aborted due to any problem
FR_TIMEOUT             = 47 ; Could not get a grant to access the volume within defined period
FR_LOCKED              = 48 ; The operation is rejected according to the file sharing policy
FR_NOT_ENOUGH_CORE     = 49 ; LFN working buffer could not be allocated
FR_TOO_MANY_OPEN_FILES = 50 ; Number of open files > FF_FS_LOCK
FR_INVALID_PARAMETER   = 51 ; Given parameter is invalid
