#define HID_MOUSE_NO_BUTTON 		0x00
#define HID_MOUSE_RIGHT_BUTTON 		0x01
#define HID_MOUSE_LEFT_BUTTON 		0x02

#define HID_KEY_MOD_LEFT_CTRL  		0x01
#define HID_KEY_MOD_LEFT_SHIFT 		0x02
#define HID_KEY_MOD_LEFT_ALT   		0x04
#define HID_KEY_MOD_LEFT_META  		0x08
#define HID_KEY_MOD_RIGHT_CTRL  	0x10
#define HID_KEY_MOD_RIGHT_SHIFT 	0x20
#define HID_KEY_MOD_RIGHT_ALT   	0x40
#define HID_KEY_MOD_RIGHT_META  	0x80

#define HID_KEY_NONE 				0x00
#define HID_KEY_ERROR_ROLLOVER 		0x01
#define HID_KEY_ERROR_POSTFAIL 		0x02
#define HID_KEY_ERROR_UNDEFINED 	0x03

#define HID_KEY_A 					0x04
#define HID_KEY_B 					0x05
#define HID_KEY_C 					0x06
#define HID_KEY_D 					0x07
#define HID_KEY_E 					0x08
#define HID_KEY_F 					0x09
#define HID_KEY_G 					0x0a
#define HID_KEY_H 					0x0b
#define HID_KEY_I 					0x0c
#define HID_KEY_J 					0x0d
#define HID_KEY_K 					0x0e
#define HID_KEY_L 					0x0f
#define HID_KEY_M 					0x10
#define HID_KEY_N 					0x11
#define HID_KEY_O 					0x12
#define HID_KEY_P 					0x13
#define HID_KEY_Q 					0x14
#define HID_KEY_R 					0x15
#define HID_KEY_S 					0x16
#define HID_KEY_T 					0x17
#define HID_KEY_U 					0x18
#define HID_KEY_V 					0x19
#define HID_KEY_W 					0x1a
#define HID_KEY_X 					0x1b
#define HID_KEY_Y 					0x1c
#define HID_KEY_Z 					0x1d

#define HID_KEY_1 					0x1e // 1 and !
#define HID_KEY_2 					0x1f // 2 and @
#define HID_KEY_3 					0x20 // 3 and #
#define HID_KEY_4 					0x21 // 4 and $
#define HID_KEY_5 					0x22 // 5 and %
#define HID_KEY_6 					0x23 // 6 and ^
#define HID_KEY_7 					0x24 // 7 and &
#define HID_KEY_8 					0x25 // 8 and *
#define HID_KEY_9 					0x26 // 9 and (
#define HID_KEY_0 					0x27 // 0 and )

#define HID_KEY_EXCLAMATION 		0x1e // 1 and !
#define HID_KEY_AT 					0x1f // 2 and @
#define HID_KEY_HASH 				0x20 // 3 and #
#define HID_KEY_DOLLAR 				0x21 // 4 and $
#define HID_KEY_PERCENT 			0x22 // 5 and %
#define HID_KEY_CIRCUMFLEX 			0x23 // 6 and ^
#define HID_KEY_AMPERSAND 			0x24 // 7 and &
#define HID_KEY_ASTERISK 			0x25 // 8 and *
#define HID_KEY_LEFTPARENTTHESIS 	0x26 // 9 and (
#define HID_KEY_RIGHTPARENTTHESIS 	0x27 // 0 and )

#define HID_KEY_RETURN 				0x28 // RETURN
#define HID_KEY_ESC 				0x29 // ESCAPE
#define HID_KEY_BACKSPACE 			0x2a // Backspace
#define HID_KEY_TAB 				0x2b // Tab
#define HID_KEY_SPACE 				0x2c // Spacebar
#define HID_KEY_MINUS 				0x2d // - and _
#define HID_KEY_UNDERSCORE 			0x2d // - and _
#define HID_KEY_EQUAL 				0x2e // = and +
#define HID_KEY_PLUS 				0x2e // = and +
#define HID_KEY_LEFTBRACE 			0x2f // [ and {
#define HID_KEY_RIGHTBRACE 			0x30 // ] and }

#define HID_KEY_BACKSLASH 			0x31 // \ and |
#define HID_KEY_PIPE 				0x31 // \ and |
#define HID_KEY_HASHTILDE 			0x32 // Non-US # and ~
#define HID_KEY_SEMICOLON 			0x33 // ; and :
#define HID_KEY_COLON 				0x33 // ; and :
#define HID_KEY_QUOTE 				0x34 // ' and "
#define HID_KEY_DOUBLE_QUOTE 		0x34 // ' and "
#define HID_KEY_GRAVE 				0x35 // ` and ~
#define HID_KEY_TILDE 				0x35 // ` and ~

#define HID_KEY_COMMA 				0x36 // , and <
#define HID_KEY_LESSTHAN 			0x36 // , and <
#define HID_KEY_DOT 				0x37 // . and >
#define HID_KEY_GREATETHAN	 		0x37 // . and >
#define HID_KEY_SLASH 				0x38 // / and ?
#define HID_KEY_QUESTIONMARK 		0x38 // / and ?
#define HID_KEY_CAPSLOCK 			0x39 // Caps Lock

#define HID_KEY_F1 					0x3a // F1
#define HID_KEY_F2 					0x3b // F2
#define HID_KEY_F3 					0x3c // F3
#define HID_KEY_F4 					0x3d // F4
#define HID_KEY_F5 					0x3e // F5
#define HID_KEY_F6 					0x3f // F6
#define HID_KEY_F7 					0x40 // F7
#define HID_KEY_F8 					0x41 // F8
#define HID_KEY_F9 					0x42 // F9
#define HID_KEY_F10 				0x43 // F10
#define HID_KEY_F11 				0x44 // F11
#define HID_KEY_F12 				0x45 // F12

#define HID_KEY_PRINT 				0x46 // Print Screen
#define HID_KEY_SCROLLLOCK 			0x47 // Scroll Lock
#define HID_KEY_PAUSE 				0x48 // Pause
#define HID_KEY_INSERT 				0x49 // Insert
#define HID_KEY_HOME 				0x4a // Home
#define HID_KEY_PAGEUP 				0x4b // Page Up
#define HID_KEY_DELETE 				0x4c // Delete Forward
#define HID_KEY_END 				0x4d // End
#define HID_KEY_PAGEDOWN 			0x4e // Page Down
#define HID_KEY_RIGHT 				0x4f // Right Arrow
#define HID_KEY_LEFT 				0x50 // Left Arrow
#define HID_KEY_DOWN 				0x51 // Down Arrow
#define HID_KEY_UP 					0x52 // Up Arrow

#define HID_KEY_NUMLOCK 			0x53 // Num Lock and Clear
#define HID_KEY_KEYPAD_SLASH 		0x54 // Keypad /
#define HID_KEY_KEYPAD_ASTERISK 	0x55 // Keypad *
#define HID_KEY_KEYPAD_MINUS 		0x56 // Keypad -
#define HID_KEY_KEYPAD_PLUS 		0x57 // Keypad +
#define HID_KEY_KEYPAD_ENTER 		0x58 // Keypad ENTER
#define HID_KEY_KEYPAD_1 			0x59 // Keypad 1 and End
#define HID_KEY_KEYPAD_2 			0x5a // Keypad 2 and Down Arrow
#define HID_KEY_KEYPAD_3 			0x5b // Keypad 3 and PageDn
#define HID_KEY_KEYPAD_4 			0x5c // Keypad 4 and Left Arrow
#define HID_KEY_KEYPAD_5 			0x5d // Keypad 5
#define HID_KEY_KEYPAD_6 			0x5e // Keypad 6 and Right Arrow
#define HID_KEY_KEYPAD_7 			0x5f // Keypad 7 and Home
#define HID_KEY_KEYPAD_8 			0x60 // Keypad 8 and Up Arrow
#define HID_KEY_KEYPAD_9 			0x61 // Keypad 9 and Page Up
#define HID_KEY_KEYPAD_0 			0x62 // Keypad 0 and Insert
#define HID_KEY_KEYPAD_DOT 			0x63 // Keypad ./, and Delete

#define USB_HOST_TO_HOST_TIMEOUT 5

#define MAX_SENSE_LENGTH 24
#define MAX_CDB_LENGTH 16
#define MAX_TRANSFER_BUFFER_LENGTH 1 << 16


#ifdef WIN32
#include <windows.h>
#include <ntddscsi.h>

#else
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdarg.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <scsi/sg.h>
#include <sys/ioctl.h>

#define INTERFACE_ID (int)'S'    
typedef int HANDLE;
#define INVALID_HANDLE_VALUE -1

#define TRUE 1
#define FALSE 0

typedef struct 
{
	sg_io_hdr_t io_hdr;
	unsigned char cdb[MAX_CDB_LENGTH];
	unsigned char sense_buffer[MAX_SENSE_LENGTH];
} SCSI_PASS_THROUGH_DIRECT;
#endif

#ifdef _POSIX_C_SOURCE >= 199309L
#include <time.h>   // use nanosleep
#else
#include <unistd.h> // use usleep
#endif

unsigned char usb_h2h_cdb_read[MAX_CDB_LENGTH]     = {217,40,100,0,0,0,0,0,0,0,0,0,0,0,79,84};
unsigned char usb_h2h_cdb_write[MAX_CDB_LENGTH]    = {217,42,255,0,0,0,0,0,0,0,0,0,0,0,79,84};
unsigned char usb_h2h_cdb_keyboard[MAX_CDB_LENGTH] = {217,52,0,0,0,0,0,0,0,0,0,0,0,0,79,84};
unsigned char usb_h2h_cdb_mouse[MAX_CDB_LENGTH]    = {217,51,0,0,0,0,0,0,0,0,0,0,0,0,79,84};

typedef struct
{
	SCSI_PASS_THROUGH_DIRECT scsi_op;
	HANDLE handle_dev;	
	unsigned char* buffer;
	unsigned int buffer_size;
	unsigned char read_count;
} USB_HOST_TO_HOST_TRANSFER;


void __ms_sleep(long ms)
{
	if (ms >= 0)
	{
	#ifdef WIN32
		Sleep(ms);
	#elif _POSIX_C_SOURCE >= 199309L
		struct timespec req;
		req.tv_sec = ms / 1000;
		req.tv_nsec = (ms % 1000) * 1000000;
		nanosleep(&req, NULL);
	#else
		usleep(mss * 1000);
	#endif
	}
}

int __is_invalid_device_handle(HANDLE handle)
{
	#ifdef MS_WINDOWS
	return (INVALID_HANDLE_VALUE == handle);
	#else
	return (handle < 0);
	#endif
}

void __close_device_handle(HANDLE handle)
{
	if (__is_invalid_device_handle(handle))
	{
		// handle is invalid
	}
	else
	{
		#ifdef MS_WINDOWS
		CloseHandle(handle);
		#else
		close(handle);
		#endif
	}
}

int __is_valid_device_name(const char *dev_path)
{
	#ifdef MS_WINDOWS	
	char tmp[] = {'\\', '\\', '.', '\\', 'X' , ':' , 0};
	
	if (strlen(dev_path) = strlen(tmp))
	{
		char drive = dev_path[4];
		tmp[4] = drive;
		
		if ( (drive >= 'a' && drive <= 'z') || (drive >= 'A' && drive <= 'Z') )	
		{	
			if (strncmp(dev_path, tmp, strlen(tmp)) == 0)
			{
				return TRUE;
			}
		}
	}
	#else
	char tmp[] = {'/', 'd', 'e', 'v', '/' , 's', 'g', 0};
	
	if (strlen(dev_path) > strlen(tmp))
	{
		if (strncmp(dev_path, tmp, strlen(tmp)) == 0)
		{
			return TRUE;
		}
	}	
	#endif
	return FALSE;
}

int __scsi_io(USB_HOST_TO_HOST_TRANSFER *transfer)
{
	int result = FALSE;
	int status;
	if (transfer != NULL)
	{
	#ifdef MS_WINDOWS
		int bytesReturned = 0;
		DeviceIoControl(transfer->handle_dev, IOCTL_SCSI_PASS_THROUGH_DIRECT, transfer->scsi_op, sizeof(SCSI_PASS_THROUGH_DIRECT), transfer->scsi_op, 80, &bytesReturned, NULL);
		if (status != 0)
		{
			//success
			result = TRUE;
		}
	#else
		status = ioctl(transfer->handle_dev, SG_IO, &transfer->scsi_op);	
		if (status == 0)
		{
			//success
			result = TRUE;
		}
		//printf("driver status: %i\n",io_hdr_write.driver_status);
		//printf("host status: %i\n",io_hdr_write.host_status);		
	#endif	
	}
	return result;
}

int __fill_SCSI_PASS_THROUGH_DIRECT(SCSI_PASS_THROUGH_DIRECT *op, int direction_read, unsigned int timeout, unsigned char *cdb, unsigned int cdb_size, void *buffer, unsigned int buffer_size)
{
	if (op)
	{
		if ( ( (buffer == NULL) && (buffer_size == 0) )  || ( (buffer && (buffer_size > 0) && (buffer_size <= MAX_TRANSFER_BUFFER_LENGTH) ) ) )
		{
			if ((cdb_size > 0) && (cdb_size <= MAX_CDB_LENGTH))
			{
				//ok
			}
			else
			{
				return FALSE;
			}
		}		
		else
		{
			return FALSE;	
		}	
	}
	else
	{
		return FALSE;
	}	
	#ifdef MS_WINDOWS
	memset(op, 0, sizeof(SCSI_PASS_THROUGH_DIRECT));
	
	op->ScsiStatus = -1;
	op->PathId = -1;
	op->TargetId = -1;
	op->Lun = -1;
		
	op->Length = sizeof(SCSI_PASS_THROUGH_DIRECT);

	op->DataIn = direction;
	op->TimeOutValue = timeout;
	
	op->DataBuffer = buffer;
	op->DataTransferLength = buffer_size;
	
	memcpy(op->scsi_op.Cdb, cdb, cdb_size);
	op->CdbLength = cdb_size;

	op->SenseInfoLength = MAX_SENSE_LENGTH;
	op->SenseInfoOffset = 48;
	
	#else
	
	memset(&op->io_hdr, 0, sizeof(sg_io_hdr_t));
	memset(&op->sense_buffer, 0, MAX_SENSE_LENGTH);
	op->io_hdr.interface_id = INTERFACE_ID;
	op->io_hdr.mx_sb_len = MAX_SENSE_LENGTH;
	op->io_hdr.sbp = op->sense_buffer;
	op->io_hdr.timeout = timeout;
	
	op->io_hdr.cmdp = op->cdb;
	op->io_hdr.cmd_len = cdb_size;
	memcpy(op->cdb, cdb, cdb_size);
	
	if (direction_read)
	{
		op->io_hdr.dxfer_direction = SG_DXFER_FROM_DEV;
	}
	else
	{
		op->io_hdr.dxfer_direction = SG_DXFER_TO_DEV;	
	}
	op->io_hdr.dxferp = buffer;
	op->io_hdr.dxfer_len = buffer_size;	
	
	#endif
	return TRUE;
}

void usb_kmcable_free_device(USB_HOST_TO_HOST_TRANSFER *transfer)
{
	if (transfer == NULL)
	{
		if (transfer->buffer)
			free(transfer->buffer);
		__close_device_handle(transfer->handle_dev);		
	}
}

void* usb_kmcable_get_device_memory(USB_HOST_TO_HOST_TRANSFER *transfer)
{
	if (transfer)
	{	
		return transfer->buffer;
	}
	return NULL;
}


int usb_kmcable_send_keyboard(USB_HOST_TO_HOST_TRANSFER *transfer, int usb_key_mod, int usb_key)
{
	unsigned char cdb[MAX_CDB_LENGTH];
	int result = FALSE;
	if (transfer != NULL)
	{	
		memcpy(&cdb[0], &usb_h2h_cdb_keyboard[0], sizeof(usb_h2h_cdb_keyboard));
		cdb[2] = (usb_key_mod & 255);
		cdb[4] = (usb_key & 255);
		__fill_SCSI_PASS_THROUGH_DIRECT(&transfer->scsi_op, TRUE, USB_HOST_TO_HOST_TIMEOUT, cdb, MAX_CDB_LENGTH, NULL, 0);
		result = __scsi_io(transfer);	
	}
	return result;	
}


int usb_kmcable_send_keyboard_text(USB_HOST_TO_HOST_TRANSFER *transfer, char* text)
{
	char hid_mapping_key[256] = {HID_KEY_NONE};
	char hid_mapping_ukey[256] = {HID_KEY_NONE};
	
	hid_mapping_ukey['A'] = 0x04;
	hid_mapping_ukey['B'] = 0x05;
	hid_mapping_ukey['C'] = 0x06;
	hid_mapping_ukey['D'] = 0x07;
	hid_mapping_ukey['E'] = 0x08;
	hid_mapping_ukey['F'] = 0x09;
	hid_mapping_ukey['G'] = 0x0a;
	hid_mapping_ukey['H'] = 0x0b;
	hid_mapping_ukey['I'] = 0x0c;
	hid_mapping_ukey['J'] = 0x0d;
	hid_mapping_ukey['K'] = 0x0e;
	hid_mapping_ukey['L'] = 0x0f;
	hid_mapping_ukey['M'] = 0x10;
	hid_mapping_ukey['N'] = 0x11;
	hid_mapping_ukey['O'] = 0x12;
	hid_mapping_ukey['P'] = 0x13;
	hid_mapping_ukey['Q'] = 0x14;
	hid_mapping_ukey['R'] = 0x15;
	hid_mapping_ukey['S'] = 0x16;
	hid_mapping_ukey['T'] = 0x17;
	hid_mapping_ukey['U'] = 0x18;
	hid_mapping_ukey['V'] = 0x19;
	hid_mapping_ukey['W'] = 0x1a;
	hid_mapping_ukey['X'] = 0x1b;
	hid_mapping_ukey['Y'] = 0x1c;
	hid_mapping_ukey['Z'] = 0x1d;

	hid_mapping_key['a'] = 0x04;
	hid_mapping_key['b'] = 0x05;
	hid_mapping_key['c'] = 0x06;
	hid_mapping_key['d'] = 0x07;
	hid_mapping_key['e'] = 0x08;
	hid_mapping_key['f'] = 0x09;
	hid_mapping_key['g'] = 0x0a;
	hid_mapping_key['h'] = 0x0b;
	hid_mapping_key['i'] = 0x0c;
	hid_mapping_key['j'] = 0x0d;
	hid_mapping_key['k'] = 0x0e;
	hid_mapping_key['l'] = 0x0f;
	hid_mapping_key['m'] = 0x10;
	hid_mapping_key['n'] = 0x11;
	hid_mapping_key['o'] = 0x12;
	hid_mapping_key['p'] = 0x13;
	hid_mapping_key['q'] = 0x14;
	hid_mapping_key['r'] = 0x15;
	hid_mapping_key['s'] = 0x16;
	hid_mapping_key['t'] = 0x17;
	hid_mapping_key['u'] = 0x18;
	hid_mapping_key['v'] = 0x19;
	hid_mapping_key['w'] = 0x1a;
	hid_mapping_key['x'] = 0x1b;
	hid_mapping_key['y'] = 0x1c;
	hid_mapping_key['z'] = 0x1d;

	hid_mapping_key['1'] = 0x1e; // 1 and !
	hid_mapping_key['2'] = 0x1f; // 2 and @
	hid_mapping_key['3'] = 0x20; // 3 and #
	hid_mapping_key['4'] = 0x21; // 4 and $
	hid_mapping_key['5'] = 0x22; // 5 and %
	hid_mapping_key['6'] = 0x23; // 6 and ^
	hid_mapping_key['7'] = 0x24; // 7 and &
	hid_mapping_key['8'] = 0x25; // 8 and *
	hid_mapping_key['9'] = 0x26; // 9 and (
	hid_mapping_key['0'] = 0x27; // 0 and )

	hid_mapping_ukey['!'] = 0x1e; // 1 and !
	hid_mapping_ukey['@'] = 0x1f; // 2 and @
	hid_mapping_ukey['#'] = 0x20; // 3 and #
	hid_mapping_ukey['$'] = 0x21; // 4 and $
	hid_mapping_ukey['%'] = 0x22; // 5 and %
	hid_mapping_ukey['^'] = 0x23; // 6 and ^
	hid_mapping_ukey['&'] = 0x24; // 7 and &
	hid_mapping_ukey['*'] = 0x25; // 8 and *
	hid_mapping_ukey['('] = 0x26; // 9 and (
	hid_mapping_ukey[')'] = 0x27; // 0 and )

	hid_mapping_key['\n'] = 0x28; // RETURN
	hid_mapping_key['\t'] = 0x2b; // Tab
	hid_mapping_key[' '] = 0x2c; // Spacebar
	hid_mapping_key['-'] = 0x2d; // - and _
	hid_mapping_ukey['_'] = 0x2d; // - and _
	hid_mapping_key['='] = 0x2e; // = and +
	hid_mapping_ukey['+'] = 0x2e; // = and +

	hid_mapping_key['['] = 0x2f; // [ and {
	hid_mapping_ukey['{'] = 0x2f; // [ and {
	hid_mapping_key[']'] = 0x30; // ] and }
	hid_mapping_ukey['}'] = 0x30; // ] and }

	hid_mapping_key['\\'] = 0x31; // \ and |
	hid_mapping_ukey['|'] = 0x31; // \ and |

	//hid_mapping_key['#'] = 0x32; // Non-US # and ~
	//hid_mapping_ukey['~'] = 0x32; // Non-US # and ~

	hid_mapping_key[';'] = 0x33; // ; and :
	hid_mapping_ukey[':'] = 0x33; // ; and :
	hid_mapping_key['\''] = 0x34; // ' and "
	hid_mapping_ukey['\"'] = 0x34; // ' and "

	hid_mapping_key['`'] = 0x35; // ` and ~
	hid_mapping_ukey['~'] = 0x35; // ` and ~

	hid_mapping_key[','] = 0x36; // , and <
	hid_mapping_ukey['<'] = 0x36; // , and <

	hid_mapping_key['.'] = 0x37; // . and >
	hid_mapping_ukey['>'] = 0x37; // . and >

	hid_mapping_key['/'] = 0x38; // / and ?
	hid_mapping_ukey['?'] = 0x38; // / and ?


	int result = FALSE;
	if (text != NULL)
	{
		if (transfer != NULL)
		{		
			while (text[0] != 0)
			{				
				int key = hid_mapping_key[text[0] & 255];
				int mod = HID_KEY_NONE;
				if (key == HID_KEY_NONE)
				{
					key = hid_mapping_ukey[text[0] & 255];
					mod = HID_KEY_MOD_LEFT_SHIFT;
				}						
				if (key != HID_KEY_NONE)
				{	
					result = usb_kmcable_send_keyboard(transfer, mod, key);
					if (result == FALSE)
					{
						break;
					}
					__ms_sleep(USB_HOST_TO_HOST_TIMEOUT);					
					result = usb_kmcable_send_keyboard(transfer, HID_KEY_NONE, HID_KEY_NONE);
					if (result == FALSE)
					{
						break;
					}						
					__ms_sleep(USB_HOST_TO_HOST_TIMEOUT);
				}
				text++;
			}
		}
	}
	return result;			
}



int usb_kmcable_send_mouse(USB_HOST_TO_HOST_TRANSFER *transfer, int usb_mouse_keys, int usb_mouse_dx, int usb_mouse_dy)
{
	unsigned char cdb[MAX_CDB_LENGTH];
	int result = FALSE;
	if (transfer != NULL)
	{	
		memcpy(&cdb[0], &usb_h2h_cdb_mouse[0], sizeof(usb_h2h_cdb_mouse));
		
		if (usb_mouse_dx < - 127)
			usb_mouse_dx = -127;
		if (usb_mouse_dy < - 127)
			usb_mouse_dy = -127;	
		
		if (usb_mouse_dx > 127)
			usb_mouse_dx = 127;
		if (usb_mouse_dy > 127)
			usb_mouse_dy = 127;	
		
		cdb[2] = (usb_mouse_keys & 255);
		cdb[3] = (usb_mouse_dx & 255);
		cdb[4] = (usb_mouse_dy & 255);
		__fill_SCSI_PASS_THROUGH_DIRECT(&transfer->scsi_op, TRUE, USB_HOST_TO_HOST_TIMEOUT, cdb, MAX_CDB_LENGTH, NULL, 0);	
		result = __scsi_io(transfer);	
	}
	return result;		
}

int usb_kmcable_send_data(USB_HOST_TO_HOST_TRANSFER *transfer)
{
	int result = FALSE;
	if (transfer != NULL)
	{
		__fill_SCSI_PASS_THROUGH_DIRECT(&transfer->scsi_op, FALSE, USB_HOST_TO_HOST_TIMEOUT, usb_h2h_cdb_write, MAX_CDB_LENGTH, transfer->buffer, transfer->buffer_size);	
		result = __scsi_io(transfer);	
	}
	return result;		
}

int usb_kmcable_read_data(USB_HOST_TO_HOST_TRANSFER *transfer)
{
	int result = FALSE;
	if (transfer != NULL)
	{	
		__fill_SCSI_PASS_THROUGH_DIRECT(&transfer->scsi_op, TRUE, USB_HOST_TO_HOST_TIMEOUT, usb_h2h_cdb_read, MAX_CDB_LENGTH, transfer->buffer, transfer->buffer_size);	
		#ifdef MS_WINDOWS
			transfer->scsi_op.Cdb[8] = transfer->read_count;
		#else
			transfer->scsi_op.cdb[8] = transfer->read_count;
		#endif	
		result = __scsi_io(transfer);	
		transfer->read_count++;	
	}
	return result;
}

int usb_kmcable_open_device(USB_HOST_TO_HOST_TRANSFER *transfer, char *dev_path)
{
	HANDLE handle = INVALID_HANDLE_VALUE; 
	char *buffer = NULL;
	int ok = TRUE;
    int vers;	
    
	if (transfer == NULL)
	{
		ok = FALSE;
	}
	
	if (dev_path == NULL)
	{
		ok = FALSE;
	}
	
	if (ok)
	{		
		if (!__is_valid_device_name(dev_path))
		{
			fprintf(stderr,"invalid device path '%s'!\n", dev_path);
			ok = FALSE;
		}
	}
	
	if (ok)
	{			
		#ifdef MS_WINDOWS
		handle = CreateFile(dev_path, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, 0, OPEN_EXISTING, FILE_FLAG_NO_BUFFERING, 0);
		#else
		handle = open(dev_path, O_RDWR);
		#endif
		
		if (__is_invalid_device_handle(handle))
		{
			fprintf(stderr,"open device '%s' failed!\n", dev_path);
			ok = FALSE;
		}
	}
	
	if (ok)
	{		
		#ifdef MS_WINDOWS
		if (GetDriveType(dev_path + strlen("\\\\.\\")) != DRIVE_CDROM)
		{
			fprintf(stderr, "Device '%s' is not detected as CDROM drive", dev_path);
			CloseHandle(handle);
		}
		#else
		if ((ioctl(handle, SG_GET_VERSION_NUM, &vers) < 0) || (vers < 30000)) {
			fprintf(stderr, "Device '%s' is not an sg device, or old sg driver\n", dev_path);
			
		}  	  
		#endif
	}

	if (ok)
	{	
		buffer = malloc(MAX_TRANSFER_BUFFER_LENGTH);
		if (buffer == NULL)
		{
			fprintf(stderr, "Cannot allocate memory\n", dev_path);
			ok = FALSE;
		}
	}
	
	if (ok)
	{
		transfer->handle_dev = handle;
		transfer->read_count = 0;
		transfer->buffer = buffer;
		transfer->buffer_size = MAX_TRANSFER_BUFFER_LENGTH;		
	}
	else
	{
		if (buffer)
			free(buffer);
		__close_device_handle(handle);
	}
	return ok;
}


void main()
{
	USB_HOST_TO_HOST_TRANSFER t;

    usb_kmcable_open_device(&t, "/dev/sg5");
    
	char *data_write = usb_kmcable_get_device_memory(&t);
    memset(data_write,0, 65536);
    
    data_write[0] = 'H';
    data_write[1] = 'e';    
    data_write[2] = 'l';
    data_write[3] = 'l';
    data_write[4] = 'o';
    data_write[5] = ' ';
    data_write[6] = 'W';
    data_write[7] = 'o';
    data_write[8] = 'r';
    data_write[9] = 'l';
    data_write[10] = 'd';
    data_write[11] = '1';
    data_write[12] = '2';
                                                
	while(1)
	{
		printf("send\n");
		usb_kmcable_send_keyboard_text(&t, "test\n");
		//usb_kmcable_send_mouse(&t, 0, 1, 1);
		//usb_kmcable_send_keyboard(&t,0,HID_KEY_A);
		//sleep(1);
		usb_kmcable_send_keyboard(&t,0,0);
		sleep(1);
		//sendDevice(&t);
		
	}
	return;
}
