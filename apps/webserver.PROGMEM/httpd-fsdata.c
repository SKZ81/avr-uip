#include <avr/pgmspace.h>
static const char data_header_html[] PROGMEM = {
	/* /header.html */
	0x2f, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 
	0x48, 0x54, 0x4d, 0x4c, 0x20, 0x50, 0x55, 0x42, 0x4c, 0x49, 
	0x43, 0x20, 0x22, 0x2d, 0x2f, 0x2f, 0x57, 0x33, 0x43, 0x2f, 
	0x2f, 0x44, 0x54, 0x44, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x20, 
	0x34, 0x2e, 0x30, 0x31, 0x20, 0x54, 0x72, 0x61, 0x6e, 0x73, 
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x2f, 0x2f, 0x45, 
	0x4e, 0x22, 0x20, 0x22, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 
	0x2f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x33, 0x2e, 0x6f, 0x72, 
	0x67, 0x2f, 0x54, 0x52, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x34, 
	0x2f, 0x6c, 0x6f, 0x6f, 0x73, 0x65, 0x2e, 0x64, 0x74, 0x64, 
	0x22, 0x3e, 0xa, 0x3c, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0xa, 
	0x20, 0x20, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0xa, 0x20, 
	0x20, 0x20, 0x20, 0x3c, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 
	0x57, 0x65, 0x6c, 0x63, 0x6f, 0x6d, 0x65, 0x20, 0x74, 0x6f, 
	0x20, 0x74, 0x68, 0x65, 0x20, 0x75, 0x49, 0x50, 0x20, 0x77, 
	0x65, 0x62, 0x20, 0x73, 0x65, 0x72, 0x76, 0x65, 0x72, 0x21, 
	0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0xa, 0x20, 
	0x20, 0x20, 0x20, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x72, 
	0x65, 0x6c, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 
	0x68, 0x65, 0x65, 0x74, 0x22, 0x20, 0x74, 0x79, 0x70, 0x65, 
	0x3d, 0x22, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x63, 0x73, 0x73, 
	0x22, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x73, 0x74, 
	0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 0x20, 
	0x20, 0xa, 0x20, 0x20, 0x3c, 0x2f, 0x68, 0x65, 0x61, 0x64, 
	0x3e, 0xa, 0x20, 0x20, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x20, 
	0x62, 0x67, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3d, 0x22, 0x23, 
	0x66, 0x66, 0x66, 0x65, 0x65, 0x63, 0x22, 0x20, 0x74, 0x65, 
	0x78, 0x74, 0x3d, 0x22, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x22, 
	0x3e, 0xa, 0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 
	0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 0x6e, 
	0x75, 0x22, 0x3e, 0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 
	0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 
	0x6e, 0x75, 0x62, 0x6f, 0x78, 0x22, 0x3e, 0x3c, 0x61, 0x20, 
	0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x22, 0x3e, 0x46, 
	0x72, 0x6f, 0x6e, 0x74, 0x20, 0x70, 0x61, 0x67, 0x65, 0x3c, 
	0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0xa, 
	0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 
	0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 0x6e, 0x75, 0x62, 0x6f, 
	0x78, 0x22, 0x3e, 0x3c, 0x61, 0x20, 0x68, 0x72, 0x65, 0x66, 
	0x3d, 0x22, 0x66, 0x69, 0x6c, 0x65, 0x73, 0x2e, 0x73, 0x68, 
	0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x46, 0x69, 0x6c, 0x65, 0x20, 
	0x73, 0x74, 0x61, 0x74, 0x69, 0x73, 0x74, 0x69, 0x63, 0x73, 
	0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 
	0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 
	0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 0x6e, 0x75, 0x62, 
	0x6f, 0x78, 0x22, 0x3e, 0x3c, 0x61, 0x20, 0x68, 0x72, 0x65, 
	0x66, 0x3d, 0x22, 0x73, 0x74, 0x61, 0x74, 0x73, 0x2e, 0x73, 
	0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x4e, 0x65, 0x74, 0x77, 
	0x6f, 0x72, 0x6b, 0x20, 0x73, 0x74, 0x61, 0x74, 0x69, 0x73, 
	0x74, 0x69, 0x63, 0x73, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 
	0x64, 0x69, 0x76, 0x3e, 0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 
	0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 
	0x65, 0x6e, 0x75, 0x62, 0x6f, 0x78, 0x22, 0x3e, 0x3c, 0x61, 
	0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x74, 0x63, 0x70, 
	0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x4e, 0x65, 
	0x74, 0x77, 0x6f, 0x72, 0x6b, 0xa, 0x20, 0x20, 0x63, 0x6f, 
	0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x3c, 
	0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0xa, 
	0x20, 0x20, 0x3c, 0x62, 0x72, 0x3e, 0xa, 0x20, 0x20, 0x3c, 
	0x2f, 0x64, 0x69, 0x76, 0x3e, 0xa, 0x20, 0x20, 0xa, 0x20, 
	0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 
	0x73, 0x3d, 0x22, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 
	0x62, 0x6c, 0x6f, 0x63, 0x6b, 0x22, 0x3e, 0xa, 0};

static const char data_413_html[] PROGMEM = {
	/* /413.html */
	0x2f, 0x34, 0x31, 0x33, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x3c, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0xa, 0x20, 0x20, 0x3c, 
	0x62, 0x6f, 0x64, 0x79, 0x20, 0x62, 0x67, 0x63, 0x6f, 0x6c, 
	0x6f, 0x72, 0x3d, 0x22, 0x77, 0x68, 0x69, 0x74, 0x65, 0x22, 
	0x3e, 0xa, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x63, 0x65, 0x6e, 
	0x74, 0x65, 0x72, 0x3e, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x3c, 0x68, 0x31, 0x3e, 0x34, 0x31, 0x33, 0x20, 0x2d, 
	0x20, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x20, 0x45, 
	0x6e, 0x74, 0x69, 0x74, 0x79, 0x20, 0x54, 0x6f, 0x6f, 0x20, 
	0x4c, 0x61, 0x72, 0x67, 0x65, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 
	0xa, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x2f, 0x63, 0x65, 0x6e, 
	0x74, 0x65, 0x72, 0x3e, 0xa, 0x20, 0x20, 0x3c, 0x2f, 0x62, 
	0x6f, 0x64, 0x79, 0x3e, 0xa, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 
	0x6c, 0x3e, 0xa, 0};

static const char data_stats_shtml[] PROGMEM = {
	/* /stats.shtml */
	0x2f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x25, 0x21, 0x3a, 0x20, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x65, 
	0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3c, 0x68, 0x31, 
	0x3e, 0x4e, 0x65, 0x74, 0x77, 0x6f, 0x72, 0x6b, 0x20, 0x73, 
	0x74, 0x61, 0x74, 0x69, 0x73, 0x74, 0x69, 0x63, 0x73, 0x3c, 
	0x2f, 0x68, 0x31, 0x3e, 0xa, 0x3c, 0x63, 0x65, 0x6e, 0x74, 
	0x65, 0x72, 0x3e, 0xa, 0x3c, 0x74, 0x61, 0x62, 0x6c, 0x65, 
	0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3d, 0x22, 0x33, 0x30, 
	0x30, 0x22, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x3d, 
	0x22, 0x30, 0x22, 0x3e, 0xa, 0x3c, 0x74, 0x72, 0x3e, 0x3c, 
	0x74, 0x64, 0x3e, 0x3c, 0x70, 0x72, 0x65, 0x3e, 0xa, 0x49, 
	0x50, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 0x74, 0x73, 0x20, 
	0x72, 0x65, 0x63, 0x65, 0x69, 0x76, 0x65, 0x64, 0xa, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 0x74, 0x73, 0x20, 
	0x73, 0x65, 0x6e, 0x74, 0xa, 0x9, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 0x74, 0x73, 0x20, 0x64, 
	0x72, 0x6f, 0x70, 0x70, 0x65, 0x64, 0xa, 0x49, 0x50, 0x20, 
	0x65, 0x72, 0x72, 0x6f, 0x72, 0x73, 0x20, 0x20, 0x20, 0x20, 
	0x49, 0x50, 0x20, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 
	0x2f, 0x68, 0x65, 0x61, 0x64, 0x65, 0x72, 0x20, 0x6c, 0x65, 
	0x6e, 0x67, 0x74, 0x68, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x49, 0x50, 
	0x20, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x2c, 0x20, 0x68, 
	0x69, 0x67, 0x68, 0x20, 0x62, 0x79, 0x74, 0x65, 0xa, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x49, 0x50, 0x20, 0x6c, 0x65, 0x6e, 0x67, 0x74, 
	0x68, 0x2c, 0x20, 0x6c, 0x6f, 0x77, 0x20, 0x62, 0x79, 0x74, 
	0x65, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x49, 0x50, 0x20, 0x66, 0x72, 
	0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x73, 0xa, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x20, 0x63, 0x68, 
	0x65, 0x63, 0x6b, 0x73, 0x75, 0x6d, 0xa, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x57, 0x72, 0x6f, 0x6e, 0x67, 0x20, 0x70, 0x72, 0x6f, 0x74, 
	0x6f, 0x63, 0x6f, 0x6c, 0xa, 0x49, 0x43, 0x4d, 0x50, 0x9, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 
	0x74, 0x73, 0x20, 0x72, 0x65, 0x63, 0x65, 0x69, 0x76, 0x65, 
	0x64, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 
	0x74, 0x73, 0x20, 0x73, 0x65, 0x6e, 0x74, 0xa, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 0x74, 0x73, 0x20, 0x64, 
	0x72, 0x6f, 0x70, 0x70, 0x65, 0x64, 0xa, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x54, 0x79, 0x70, 0x65, 0x20, 0x65, 0x72, 0x72, 0x6f, 0x72, 
	0x73, 0xa, 0x54, 0x43, 0x50, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 
	0x74, 0x73, 0x20, 0x72, 0x65, 0x63, 0x65, 0x69, 0x76, 0x65, 
	0x64, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 
	0x74, 0x73, 0x20, 0x73, 0x65, 0x6e, 0x74, 0xa, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x50, 0x61, 0x63, 0x6b, 0x65, 0x74, 0x73, 0x20, 0x64, 
	0x72, 0x6f, 0x70, 0x70, 0x65, 0x64, 0xa, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x43, 0x68, 0x65, 0x63, 0x6b, 0x73, 0x75, 0x6d, 0x20, 0x65, 
	0x72, 0x72, 0x6f, 0x72, 0x73, 0xa, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x44, 
	0x61, 0x74, 0x61, 0x20, 0x70, 0x61, 0x63, 0x6b, 0x65, 0x74, 
	0x73, 0x20, 0x77, 0x69, 0x74, 0x68, 0x6f, 0x75, 0x74, 0x20, 
	0x41, 0x43, 0x4b, 0x73, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x52, 0x65, 
	0x73, 0x65, 0x74, 0x73, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x52, 0x65, 
	0x74, 0x72, 0x61, 0x6e, 0x73, 0x6d, 0x69, 0x73, 0x73, 0x69, 
	0x6f, 0x6e, 0x73, 0xa, 0x9, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x4e, 0x6f, 0x20, 0x63, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 
	0x69, 0x6f, 0x6e, 0x20, 0x61, 0x76, 0x61, 0x6c, 0x69, 0x61, 
	0x62, 0x6c, 0x65, 0xa, 0x9, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x43, 0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 
	0x20, 0x61, 0x74, 0x74, 0x65, 0x6d, 0x70, 0x74, 0x73, 0x20, 
	0x74, 0x6f, 0x20, 0x63, 0x6c, 0x6f, 0x73, 0x65, 0x64, 0x20, 
	0x70, 0x6f, 0x72, 0x74, 0x73, 0xa, 0x3c, 0x2f, 0x70, 0x72, 
	0x65, 0x3e, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0x3c, 0x74, 0x64, 
	0x3e, 0x3c, 0x70, 0x72, 0x65, 0x3e, 0x25, 0x21, 0x20, 0x6e, 
	0x65, 0x74, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x73, 0xa, 0x3c, 
	0x2f, 0x70, 0x72, 0x65, 0x3e, 0x3c, 0x2f, 0x74, 0x61, 0x62, 
	0x6c, 0x65, 0x3e, 0xa, 0x3c, 0x2f, 0x63, 0x65, 0x6e, 0x74, 
	0x65, 0x72, 0x3e, 0xa, 0x25, 0x21, 0x3a, 0x20, 0x2f, 0x66, 
	0x6f, 0x6f, 0x74, 0x65, 0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 
	0xa, 0};

static const char data_tcp_shtml[] PROGMEM = {
	/* /tcp.shtml */
	0x2f, 0x74, 0x63, 0x70, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x25, 0x21, 0x3a, 0x20, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x65, 
	0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3c, 0x68, 0x31, 
	0x3e, 0x43, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x74, 0x20, 0x63, 
	0x6f, 0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x73, 
	0x3c, 0x2f, 0x68, 0x31, 0x3e, 0x3c, 0x62, 0x72, 0x3e, 0x3c, 
	0x74, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x77, 0x69, 0x64, 0x74, 
	0x68, 0x3d, 0x22, 0x31, 0x30, 0x30, 0x25, 0x22, 0x3e, 0xa, 
	0x3c, 0x74, 0x72, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x4c, 0x6f, 
	0x63, 0x61, 0x6c, 0x3c, 0x2f, 0x74, 0x68, 0x3e, 0x3c, 0x74, 
	0x68, 0x3e, 0x52, 0x65, 0x6d, 0x6f, 0x74, 0x65, 0x3c, 0x2f, 
	0x74, 0x68, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x53, 0x74, 0x61, 
	0x74, 0x65, 0x3c, 0x2f, 0x74, 0x68, 0x3e, 0x3c, 0x74, 0x68, 
	0x3e, 0x52, 0x65, 0x74, 0x72, 0x61, 0x6e, 0x73, 0x6d, 0x69, 
	0x73, 0x73, 0x69, 0x6f, 0x6e, 0x73, 0x3c, 0x2f, 0x74, 0x68, 
	0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x54, 0x69, 0x6d, 0x65, 0x72, 
	0x3c, 0x2f, 0x74, 0x68, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x46, 
	0x6c, 0x61, 0x67, 0x73, 0x3c, 0x2f, 0x74, 0x68, 0x3e, 0x3c, 
	0x2f, 0x74, 0x72, 0x3e, 0xa, 0x25, 0x21, 0x20, 0x6d, 0x79, 
	0x63, 0x67, 0x69, 0xa, 0x25, 0x21, 0x3a, 0x20, 0x2f, 0x66, 
	0x6f, 0x6f, 0x74, 0x65, 0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 
	0xa, 0};

static const char data_style_css[] PROGMEM = {
	/* /style.css */
	0x2f, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0,
	0x68, 0x31, 0x20, 0xa, 0x7b, 0xa, 0x20, 0x20, 0x74, 0x65, 
	0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x20, 
	0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x3b, 0xa, 0x20, 0x20, 
	0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x73, 0x69, 0x7a, 0x65, 0x3a, 
	0x31, 0x34, 0x70, 0x74, 0x3b, 0xa, 0x20, 0x20, 0x66, 0x6f, 
	0x6e, 0x74, 0x2d, 0x66, 0x61, 0x6d, 0x69, 0x6c, 0x79, 0x3a, 
	0x61, 0x72, 0x69, 0x61, 0x6c, 0x2c, 0x68, 0x65, 0x6c, 0x76, 
	0x65, 0x74, 0x69, 0x63, 0x61, 0x3b, 0xa, 0x20, 0x20, 0x66, 
	0x6f, 0x6e, 0x74, 0x2d, 0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x3a, 0x62, 0x6f, 0x6c, 0x64, 0x3b, 0xa, 0x20, 0x20, 0x70, 
	0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x31, 0x30, 0x70, 
	0x78, 0x3b, 0x20, 0xa, 0x7d, 0xa, 0xa, 0x62, 0x6f, 0x64, 
	0x79, 0xa, 0x7b, 0xa, 0xa, 0x20, 0x20, 0x62, 0x61, 0x63, 
	0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 
	0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x66, 0x66, 0x66, 0x65, 
	0x65, 0x63, 0x3b, 0xa, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 
	0x72, 0x3a, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x3b, 0xa, 0xa, 
	0x20, 0x20, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x73, 0x69, 0x7a, 
	0x65, 0x3a, 0x38, 0x70, 0x74, 0x3b, 0xa, 0x20, 0x20, 0x66, 
	0x6f, 0x6e, 0x74, 0x2d, 0x66, 0x61, 0x6d, 0x69, 0x6c, 0x79, 
	0x3a, 0x61, 0x72, 0x69, 0x61, 0x6c, 0x2c, 0x68, 0x65, 0x6c, 
	0x76, 0x65, 0x74, 0x69, 0x63, 0x61, 0x3b, 0xa, 0x7d, 0xa, 
	0xa, 0x2e, 0x6d, 0x65, 0x6e, 0x75, 0xa, 0x7b, 0xa, 0x20, 
	0x20, 0x6d, 0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x34, 
	0x70, 0x78, 0x3b, 0xa, 0x20, 0x20, 0x77, 0x69, 0x64, 0x74, 
	0x68, 0x3a, 0x36, 0x30, 0x25, 0x3b, 0xa, 0xa, 0x20, 0x20, 
	0x70, 0x61, 0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x32, 0x70, 
	0x78, 0x3b, 0xa, 0x9, 0xa, 0x20, 0x20, 0x62, 0x6f, 0x72, 
	0x64, 0x65, 0x72, 0x3a, 0x20, 0x73, 0x6f, 0x6c, 0x69, 0x64, 
	0x20, 0x31, 0x70, 0x78, 0x3b, 0xa, 0x20, 0x20, 0x62, 0x61, 
	0x63, 0x6b, 0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 
	0x6f, 0x6c, 0x6f, 0x72, 0x3a, 0x20, 0x23, 0x66, 0x66, 0x66, 
	0x63, 0x64, 0x32, 0x3b, 0xa, 0x20, 0x20, 0x74, 0x65, 0x78, 
	0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x6c, 0x65, 
	0x66, 0x74, 0x3b, 0xa, 0x20, 0x20, 0xa, 0x20, 0x20, 0x66, 
	0x6f, 0x6e, 0x74, 0x2d, 0x73, 0x69, 0x7a, 0x65, 0x3a, 0x39, 
	0x70, 0x74, 0x3b, 0xa, 0x20, 0x20, 0x66, 0x6f, 0x6e, 0x74, 
	0x2d, 0x66, 0x61, 0x6d, 0x69, 0x6c, 0x79, 0x3a, 0x61, 0x72, 
	0x69, 0x61, 0x6c, 0x2c, 0x68, 0x65, 0x6c, 0x76, 0x65, 0x74, 
	0x69, 0x63, 0x61, 0x3b, 0x20, 0x20, 0xa, 0x7d, 0xa, 0xa, 
	0x64, 0x69, 0x76, 0x2e, 0x6d, 0x65, 0x6e, 0x75, 0x62, 0x6f, 
	0x78, 0xa, 0x7b, 0xa, 0x20, 0x20, 0x77, 0x69, 0x64, 0x74, 
	0x68, 0x3a, 0x20, 0x32, 0x35, 0x25, 0x3b, 0xa, 0x20, 0x20, 
	0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 0x3a, 0x20, 0x30, 0x3b, 
	0xa, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3a, 0x20, 
	0x6c, 0x65, 0x66, 0x74, 0x3b, 0xa, 0x74, 0x65, 0x78, 0x74, 
	0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 0x20, 0x63, 0x65, 
	0x6e, 0x74, 0x65, 0x72, 0x3b, 0xa, 0x7d, 0xa, 0xa, 0x2e, 
	0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x62, 0x6c, 0x6f, 
	0x63, 0x6b, 0xa, 0x7b, 0x20, 0x20, 0xa, 0x20, 0x20, 0x6d, 
	0x61, 0x72, 0x67, 0x69, 0x6e, 0x3a, 0x20, 0x34, 0x70, 0x78, 
	0x3b, 0xa, 0x20, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3a, 
	0x36, 0x30, 0x25, 0x3b, 0xa, 0xa, 0x20, 0x20, 0x70, 0x61, 
	0x64, 0x64, 0x69, 0x6e, 0x67, 0x3a, 0x32, 0x70, 0x78, 0x3b, 
	0xa, 0xa, 0x20, 0x20, 0x62, 0x6f, 0x72, 0x64, 0x65, 0x72, 
	0x3a, 0x20, 0x31, 0x70, 0x78, 0x20, 0x64, 0x6f, 0x74, 0x74, 
	0x65, 0x64, 0x3b, 0xa, 0x20, 0x20, 0x62, 0x61, 0x63, 0x6b, 
	0x67, 0x72, 0x6f, 0x75, 0x6e, 0x64, 0x2d, 0x63, 0x6f, 0x6c, 
	0x6f, 0x72, 0x3a, 0x20, 0x77, 0x68, 0x69, 0x74, 0x65, 0x3b, 
	0xa, 0xa, 0x20, 0x20, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x73, 
	0x69, 0x7a, 0x65, 0x3a, 0x38, 0x70, 0x74, 0x3b, 0xa, 0x20, 
	0x20, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x66, 0x61, 0x6d, 0x69, 
	0x6c, 0x79, 0x3a, 0x61, 0x72, 0x69, 0x61, 0x6c, 0x2c, 0x68, 
	0x65, 0x6c, 0x76, 0x65, 0x74, 0x69, 0x63, 0x61, 0x3b, 0x20, 
	0x20, 0xa, 0xa, 0x7d, 0xa, 0xa, 0x70, 0x2e, 0x69, 0x6e, 
	0x74, 0x72, 0x6f, 0xa, 0x7b, 0xa, 0x20, 0x20, 0x6d, 0x61, 
	0x72, 0x67, 0x69, 0x6e, 0x2d, 0x6c, 0x65, 0x66, 0x74, 0x3a, 
	0x32, 0x30, 0x70, 0x78, 0x3b, 0xa, 0x20, 0x20, 0x6d, 0x61, 
	0x72, 0x67, 0x69, 0x6e, 0x2d, 0x72, 0x69, 0x67, 0x68, 0x74, 
	0x3a, 0x32, 0x30, 0x70, 0x78, 0x3b, 0xa, 0xa, 0x20, 0x20, 
	0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x73, 0x69, 0x7a, 0x65, 0x3a, 
	0x31, 0x30, 0x70, 0x74, 0x3b, 0xa, 0x2f, 0x2a, 0x20, 0x20, 
	0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x77, 0x65, 0x69, 0x67, 0x68, 
	0x74, 0x3a, 0x62, 0x6f, 0x6c, 0x64, 0x3b, 0x20, 0x2a, 0x2f, 
	0xa, 0x20, 0x20, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x66, 0x61, 
	0x6d, 0x69, 0x6c, 0x79, 0x3a, 0x61, 0x72, 0x69, 0x61, 0x6c, 
	0x2c, 0x68, 0x65, 0x6c, 0x76, 0x65, 0x74, 0x69, 0x63, 0x61, 
	0x3b, 0x20, 0x20, 0xa, 0x7d, 0xa, 0xa, 0x70, 0x2e, 0x63, 
	0x6c, 0x69, 0x6e, 0x6b, 0xa, 0x7b, 0xa, 0x20, 0x20, 0x66, 
	0x6f, 0x6e, 0x74, 0x2d, 0x73, 0x69, 0x7a, 0x65, 0x3a, 0x31, 
	0x32, 0x70, 0x74, 0x3b, 0xa, 0x20, 0x20, 0x66, 0x6f, 0x6e, 
	0x74, 0x2d, 0x66, 0x61, 0x6d, 0x69, 0x6c, 0x79, 0x3a, 0x63, 
	0x6f, 0x75, 0x72, 0x69, 0x65, 0x72, 0x2c, 0x6d, 0x6f, 0x6e, 
	0x6f, 0x73, 0x70, 0x61, 0x63, 0x65, 0x3b, 0x20, 0x20, 0xa, 
	0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 
	0x67, 0x6e, 0x3a, 0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x3b, 
	0xa, 0x7d, 0xa, 0xa, 0x70, 0x2e, 0x63, 0x6c, 0x69, 0x6e, 
	0x6b, 0x39, 0xa, 0x7b, 0xa, 0x20, 0x20, 0x66, 0x6f, 0x6e, 
	0x74, 0x2d, 0x73, 0x69, 0x7a, 0x65, 0x3a, 0x39, 0x70, 0x74, 
	0x3b, 0xa, 0x20, 0x20, 0x66, 0x6f, 0x6e, 0x74, 0x2d, 0x66, 
	0x61, 0x6d, 0x69, 0x6c, 0x79, 0x3a, 0x63, 0x6f, 0x75, 0x72, 
	0x69, 0x65, 0x72, 0x2c, 0x6d, 0x6f, 0x6e, 0x6f, 0x73, 0x70, 
	0x61, 0x63, 0x65, 0x3b, 0x20, 0x20, 0xa, 0x20, 0x20, 0x74, 
	0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 0x67, 0x6e, 0x3a, 
	0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x3b, 0xa, 0x7d, 0xa, 
	0xa, 0xa, 0x70, 0xa, 0x7b, 0xa, 0x20, 0x20, 0x70, 0x61, 
	0x64, 0x64, 0x69, 0x6e, 0x67, 0x2d, 0x6c, 0x65, 0x66, 0x74, 
	0x3a, 0x31, 0x30, 0x70, 0x78, 0x3b, 0xa, 0x7d, 0xa, 0xa, 
	0x70, 0x2e, 0x72, 0x69, 0x67, 0x68, 0x74, 0xa, 0x7b, 0xa, 
	0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x2d, 0x61, 0x6c, 0x69, 
	0x67, 0x6e, 0x3a, 0x72, 0x69, 0x67, 0x68, 0x74, 0x3b, 0x20, 
	0xa, 0x7d, 0xa, 0xa, 0};

static const char data_404_html[] PROGMEM = {
	/* /404.html */
	0x2f, 0x34, 0x30, 0x34, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x3c, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0xa, 0x20, 0x20, 0x3c, 
	0x62, 0x6f, 0x64, 0x79, 0x20, 0x62, 0x67, 0x63, 0x6f, 0x6c, 
	0x6f, 0x72, 0x3d, 0x22, 0x77, 0x68, 0x69, 0x74, 0x65, 0x22, 
	0x3e, 0xa, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x63, 0x65, 0x6e, 
	0x74, 0x65, 0x72, 0x3e, 0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x3c, 0x68, 0x31, 0x3e, 0x34, 0x30, 0x34, 0x20, 0x2d, 
	0x20, 0x66, 0x69, 0x6c, 0x65, 0x20, 0x6e, 0x6f, 0x74, 0x20, 
	0x66, 0x6f, 0x75, 0x6e, 0x64, 0x3c, 0x2f, 0x68, 0x31, 0x3e, 
	0xa, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3c, 0x68, 0x33, 
	0x3e, 0x47, 0x6f, 0x20, 0x3c, 0x61, 0x20, 0x68, 0x72, 0x65, 
	0x66, 0x3d, 0x22, 0x2f, 0x22, 0x3e, 0x68, 0x65, 0x72, 0x65, 
	0x3c, 0x2f, 0x61, 0x3e, 0x20, 0x69, 0x6e, 0x73, 0x74, 0x65, 
	0x61, 0x64, 0x2e, 0x3c, 0x2f, 0x68, 0x33, 0x3e, 0xa, 0x20, 
	0x20, 0x20, 0x20, 0x3c, 0x2f, 0x63, 0x65, 0x6e, 0x74, 0x65, 
	0x72, 0x3e, 0xa, 0x20, 0x20, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 
	0x79, 0x3e, 0xa, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 
0};

static const char data_processes_shtml[] PROGMEM = {
	/* /processes.shtml */
	0x2f, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x65, 0x73, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x25, 0x21, 0x3a, 0x20, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x65, 
	0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3c, 0x68, 0x31, 
	0x3e, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x20, 0x70, 0x72, 
	0x6f, 0x63, 0x65, 0x73, 0x73, 0x65, 0x73, 0x3c, 0x2f, 0x68, 
	0x31, 0x3e, 0x3c, 0x62, 0x72, 0x3e, 0x3c, 0x74, 0x61, 0x62, 
	0x6c, 0x65, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3d, 0x22, 
	0x31, 0x30, 0x30, 0x25, 0x22, 0x3e, 0xa, 0x3c, 0x74, 0x72, 
	0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x49, 0x44, 0x3c, 0x2f, 0x74, 
	0x68, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x4e, 0x61, 0x6d, 0x65, 
	0x3c, 0x2f, 0x74, 0x68, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x50, 
	0x72, 0x69, 0x6f, 0x72, 0x69, 0x74, 0x79, 0x3c, 0x2f, 0x74, 
	0x68, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x50, 0x6f, 0x6c, 0x6c, 
	0x20, 0x68, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x72, 0x3c, 0x2f, 
	0x74, 0x68, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x45, 0x76, 0x65, 
	0x6e, 0x74, 0x20, 0x68, 0x61, 0x6e, 0x64, 0x6c, 0x65, 0x72, 
	0x3c, 0x2f, 0x74, 0x68, 0x3e, 0x3c, 0x74, 0x68, 0x3e, 0x50, 
	0x72, 0x6f, 0x63, 0x73, 0x74, 0x61, 0x74, 0x65, 0x3c, 0x2f, 
	0x74, 0x68, 0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 0xa, 0x25, 
	0x21, 0x20, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x73, 0x73, 0x65, 
	0x73, 0xa, 0x25, 0x21, 0x3a, 0x20, 0x2f, 0x66, 0x6f, 0x6f, 
	0x74, 0x65, 0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0};

static const char data_footer_html[] PROGMEM = {
	/* /footer.html */
	0x2f, 0x66, 0x6f, 0x6f, 0x74, 0x65, 0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x20, 0x20, 0x3c, 0x2f, 0x62, 0x6f, 0x64, 0x79, 0x3e, 0xa, 
	0x3c, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0};

static const char data_hello_shtml[] PROGMEM = {
	/* /hello.shtml */
	0x2f, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x25, 0x21, 0x3a, 0x20, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x65, 
	0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3c, 0x68, 0x31, 
	0x3e, 0x54, 0x68, 0x65, 0x20, 0x4f, 0x75, 0x74, 0x70, 0x75, 
	0x74, 0x20, 0x6f, 0x66, 0x20, 0x61, 0x20, 0x43, 0x47, 0x49, 
	0x20, 0x73, 0x63, 0x72, 0x69, 0x70, 0x74, 0x3a, 0x3c, 0x2f, 
	0x68, 0x31, 0x3e, 0x3c, 0x62, 0x72, 0x3e, 0xa, 0x25, 0x21, 
	0x20, 0x68, 0x65, 0x6c, 0x6c, 0x6f, 0xa, 0x25, 0x21, 0x3a, 
	0x20, 0x2f, 0x66, 0x6f, 0x6f, 0x74, 0x65, 0x72, 0x2e, 0x68, 
	0x74, 0x6d, 0x6c, 0xa, 0};

static const char data_fade_png[] PROGMEM = {
	/* /fade.png */
	0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 0x70, 0x6e, 0x67, 0,
	0x89, 0x50, 0x4e, 0x47, 0xd, 0xa, 0x1a, 0xa, 00, 00, 
	00, 0xd, 0x49, 0x48, 0x44, 0x52, 00, 00, 00, 0x4, 
	00, 00, 00, 0xa, 0x8, 0x2, 00, 00, 00, 0x1c, 
	0x99, 0x68, 0x59, 00, 00, 00, 0x9, 0x70, 0x48, 0x59, 
	0x73, 00, 00, 0xb, 0x13, 00, 00, 0xb, 0x13, 0x1, 
	00, 0x9a, 0x9c, 0x18, 00, 00, 00, 0x7, 0x74, 0x49, 
	0x4d, 0x45, 0x7, 0xd6, 0x6, 0x8, 0x14, 0x1b, 0x39, 0xaf, 
	0x5b, 0xc0, 0xe3, 00, 00, 00, 0x1d, 0x74, 0x45, 0x58, 
	0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 00, 0x43, 
	0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 
	0x68, 0x20, 0x54, 0x68, 0x65, 0x20, 0x47, 0x49, 0x4d, 0x50, 
	0xef, 0x64, 0x25, 0x6e, 00, 00, 00, 0x3a, 0x49, 0x44, 
	0x41, 0x54, 0x8, 0xd7, 0x75, 0x8c, 0x31, 0x12, 00, 0x10, 
	0x10, 0xc4, 0x2e, 0x37, 0x9e, 0x40, 0x65, 0xfd, 0xff, 0x83, 
	0xf4, 0xa, 0x1c, 0x8d, 0x54, 0x9b, 0xc9, 0xcc, 0x9a, 0x3d, 
	0x90, 0x73, 0x71, 0x67, 0x91, 0xd4, 0x74, 0x36, 0xa9, 0x55, 
	0x1, 0xf8, 0x29, 0x58, 0xc8, 0xbf, 0x48, 0xc4, 0x81, 0x74, 
	0xb, 0xa3, 0xf, 0x7c, 0xdb, 0x4, 0xe8, 0x40, 0x5, 0xdf, 
	0xa1, 0xf3, 0xfc, 0x73, 00, 00, 00, 00, 0x49, 0x45, 
	0x4e, 0x44, 0xae, 0x42, 0x60, 0x82, 0};

static const char data_index_html[] PROGMEM = {
	/* /index.html */
	0x2f, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 
	0x48, 0x54, 0x4d, 0x4c, 0x20, 0x50, 0x55, 0x42, 0x4c, 0x49, 
	0x43, 0x20, 0x22, 0x2d, 0x2f, 0x2f, 0x57, 0x33, 0x43, 0x2f, 
	0x2f, 0x44, 0x54, 0x44, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x20, 
	0x34, 0x2e, 0x30, 0x31, 0x20, 0x54, 0x72, 0x61, 0x6e, 0x73, 
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x2f, 0x2f, 0x45, 
	0x4e, 0x22, 0x20, 0x22, 0x68, 0x74, 0x74, 0x70, 0x3a, 0x2f, 
	0x2f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x33, 0x2e, 0x6f, 0x72, 
	0x67, 0x2f, 0x54, 0x52, 0x2f, 0x68, 0x74, 0x6d, 0x6c, 0x34, 
	0x2f, 0x6c, 0x6f, 0x6f, 0x73, 0x65, 0x2e, 0x64, 0x74, 0x64, 
	0x22, 0x3e, 0xa, 0x3c, 0x68, 0x74, 0x6d, 0x6c, 0x3e, 0xa, 
	0x20, 0x20, 0x3c, 0x68, 0x65, 0x61, 0x64, 0x3e, 0xa, 0x20, 
	0x20, 0x20, 0x20, 0x3c, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 
	0x57, 0x65, 0x6c, 0x63, 0x6f, 0x6d, 0x65, 0x20, 0x74, 0x6f, 
	0x20, 0x74, 0x68, 0x65, 0x20, 0x75, 0x49, 0x50, 0x20, 0x77, 
	0x65, 0x62, 0x20, 0x73, 0x65, 0x72, 0x76, 0x65, 0x72, 0x21, 
	0x3c, 0x2f, 0x74, 0x69, 0x74, 0x6c, 0x65, 0x3e, 0xa, 0x20, 
	0x20, 0x20, 0x20, 0x3c, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x72, 
	0x65, 0x6c, 0x3d, 0x22, 0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 
	0x68, 0x65, 0x65, 0x74, 0x22, 0x20, 0x74, 0x79, 0x70, 0x65, 
	0x3d, 0x22, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x63, 0x73, 0x73, 
	0x22, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x73, 0x74, 
	0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 0x20, 
	0x20, 0xa, 0x20, 0x20, 0x3c, 0x2f, 0x68, 0x65, 0x61, 0x64, 
	0x3e, 0xa, 0x20, 0x20, 0x3c, 0x62, 0x6f, 0x64, 0x79, 0x20, 
	0x62, 0x67, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x3d, 0x22, 0x23, 
	0x66, 0x66, 0x66, 0x65, 0x65, 0x63, 0x22, 0x20, 0x74, 0x65, 
	0x78, 0x74, 0x3d, 0x22, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x22, 
	0x3e, 0xa, 0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 
	0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 0x6e, 
	0x75, 0x22, 0x3e, 0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 
	0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 
	0x6e, 0x75, 0x62, 0x6f, 0x78, 0x22, 0x3e, 0x3c, 0x61, 0x20, 
	0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x22, 0x3e, 0x46, 
	0x72, 0x6f, 0x6e, 0x74, 0x20, 0x70, 0x61, 0x67, 0x65, 0x3c, 
	0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0xa, 
	0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 
	0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 0x6e, 0x75, 0x62, 0x6f, 
	0x78, 0x22, 0x3e, 0x3c, 0x61, 0x20, 0x68, 0x72, 0x65, 0x66, 
	0x3d, 0x22, 0x66, 0x69, 0x6c, 0x65, 0x73, 0x2e, 0x73, 0x68, 
	0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x46, 0x69, 0x6c, 0x65, 0x20, 
	0x73, 0x74, 0x61, 0x74, 0x69, 0x73, 0x74, 0x69, 0x63, 0x73, 
	0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 
	0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 
	0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 0x65, 0x6e, 0x75, 0x62, 
	0x6f, 0x78, 0x22, 0x3e, 0x3c, 0x61, 0x20, 0x68, 0x72, 0x65, 
	0x66, 0x3d, 0x22, 0x73, 0x74, 0x61, 0x74, 0x73, 0x2e, 0x73, 
	0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x4e, 0x65, 0x74, 0x77, 
	0x6f, 0x72, 0x6b, 0x20, 0x73, 0x74, 0x61, 0x74, 0x69, 0x73, 
	0x74, 0x69, 0x63, 0x73, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 
	0x64, 0x69, 0x76, 0x3e, 0xa, 0x20, 0x20, 0x3c, 0x64, 0x69, 
	0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 0x22, 0x6d, 
	0x65, 0x6e, 0x75, 0x62, 0x6f, 0x78, 0x22, 0x3e, 0x3c, 0x61, 
	0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x74, 0x63, 0x70, 
	0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x4e, 0x65, 
	0x74, 0x77, 0x6f, 0x72, 0x6b, 0xa, 0x20, 0x20, 0x63, 0x6f, 
	0x6e, 0x6e, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x3c, 
	0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x64, 0x69, 0x76, 0x3e, 0xa, 
	0x20, 0x20, 0x3c, 0x62, 0x72, 0x3e, 0xa, 0x20, 0x20, 0x3c, 
	0x2f, 0x64, 0x69, 0x76, 0x3e, 0xa, 0xa, 0x20, 0x20, 0x3c, 
	0x64, 0x69, 0x76, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x3d, 
	0x22, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e, 0x74, 0x62, 0x6c, 
	0x6f, 0x63, 0x6b, 0x22, 0x3e, 0xa, 0x20, 0x20, 0x3c, 0x70, 
	0x3e, 0xa, 0x20, 0x20, 0x54, 0x68, 0x65, 0x73, 0x65, 0x20, 
	0x77, 0x65, 0x62, 0x20, 0x70, 0x61, 0x67, 0x65, 0x73, 0x20, 
	0x61, 0x72, 0x65, 0x20, 0x73, 0x65, 0x72, 0x76, 0x65, 0x64, 
	0x20, 0x62, 0x79, 0x20, 0x61, 0x20, 0x73, 0x6d, 0x61, 0x6c, 
	0x6c, 0x20, 0x77, 0x65, 0x62, 0x20, 0x73, 0x65, 0x72, 0x76, 
	0x65, 0x72, 0x20, 0x72, 0x75, 0x6e, 0x6e, 0x69, 0x6e, 0x67, 
	0x20, 0x6f, 0x6e, 0x20, 0x74, 0x6f, 0x70, 0x20, 0x6f, 0x66, 
	0xa, 0x20, 0x20, 0x74, 0x68, 0x65, 0x20, 0x3c, 0x61, 0x20, 
	0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x68, 0x74, 0x74, 0x70, 
	0x3a, 0x2f, 0x2f, 0x77, 0x77, 0x77, 0x2e, 0x73, 0x69, 0x63, 
	0x73, 0x2e, 0x73, 0x65, 0x2f, 0x7e, 0x61, 0x64, 0x61, 0x6d, 
	0x2f, 0x75, 0x69, 0x70, 0x2f, 0x22, 0x3e, 0x75, 0x49, 0x50, 
	0x20, 0x65, 0x6d, 0x62, 0x65, 0x64, 0x64, 0x65, 0x64, 0x20, 
	0x54, 0x43, 0x50, 0x2f, 0x49, 0x50, 0xa, 0x20, 0x20, 0x73, 
	0x74, 0x61, 0x63, 0x6b, 0x3c, 0x2f, 0x61, 0x3e, 0x2e, 0xa, 
	0x20, 0x20, 0x3c, 0x2f, 0x70, 0x3e, 0xa, 0x20, 0x20, 0x3c, 
	0x70, 0x3e, 0xa, 0x20, 0x20, 0x43, 0x6c, 0x69, 0x63, 0x6b, 
	0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6c, 0x69, 
	0x6e, 0x6b, 0x73, 0x20, 0x61, 0x62, 0x6f, 0x76, 0x65, 0x20, 
	0x66, 0x6f, 0x72, 0x20, 0x77, 0x65, 0x62, 0x20, 0x73, 0x65, 
	0x72, 0x76, 0x65, 0x72, 0x20, 0x73, 0x74, 0x61, 0x74, 0x69, 
	0x73, 0x74, 0x69, 0x63, 0x73, 0x2e, 0xa, 0x20, 0x20, 0x3c, 
	0x2f, 0x70, 0x3e, 0xa, 0xa, 0x20, 0x20, 0x3c, 0x2f, 0x62, 
	0x6f, 0x64, 0x79, 0x3e, 0xa, 0x3c, 0x2f, 0x68, 0x74, 0x6d, 
	0x6c, 0x3e, 0xa, 0};

static const char data_files_shtml[] PROGMEM = {
	/* /files.shtml */
	0x2f, 0x66, 0x69, 0x6c, 0x65, 0x73, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0,
	0x25, 0x21, 0x3a, 0x20, 0x2f, 0x68, 0x65, 0x61, 0x64, 0x65, 
	0x72, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3c, 0x68, 0x31, 
	0x3e, 0x46, 0x69, 0x6c, 0x65, 0x20, 0x73, 0x74, 0x61, 0x74, 
	0x69, 0x73, 0x74, 0x69, 0x63, 0x73, 0x3c, 0x2f, 0x68, 0x31, 
	0x3e, 0xa, 0x3c, 0x63, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x3e, 
	0xa, 0x3c, 0x74, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x77, 0x69, 
	0x64, 0x74, 0x68, 0x3d, 0x22, 0x33, 0x30, 0x30, 0x22, 0x3e, 
	0xa, 0x3c, 0x74, 0x72, 0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 
	0x61, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x69, 
	0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x22, 
	0x3e, 0x2f, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 0x74, 
	0x6d, 0x6c, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x74, 0x64, 
	0x3e, 0xa, 0x3c, 0x74, 0x64, 0x3e, 0x25, 0x21, 0x20, 0x66, 
	0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x20, 
	0x2f, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 0x74, 0x6d, 
	0x6c, 0xa, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0x3c, 0x74, 0x64, 
	0x3e, 0x3c, 0x69, 0x6d, 0x67, 0x20, 0x73, 0x72, 0x63, 0x3d, 
	0x22, 0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 0x70, 0x6e, 0x67, 
	0x22, 0x20, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3d, 0x31, 
	0x30, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3d, 0x25, 0x21, 
	0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 0x61, 0x74, 
	0x73, 0x20, 0x2f, 0x69, 0x6e, 0x64, 0x65, 0x78, 0x2e, 0x68, 
	0x74, 0x6d, 0x6c, 0xa, 0x3e, 0x20, 0x3c, 0x2f, 0x74, 0x64, 
	0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 0xa, 0x3c, 0x74, 0x72, 
	0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x61, 0x20, 0x68, 0x72, 
	0x65, 0x66, 0x3d, 0x22, 0x2f, 0x66, 0x69, 0x6c, 0x65, 0x73, 
	0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x2f, 0x66, 
	0x69, 0x6c, 0x65, 0x73, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 
	0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0xa, 
	0x3c, 0x74, 0x64, 0x3e, 0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 
	0x65, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x20, 0x2f, 0x66, 
	0x69, 0x6c, 0x65, 0x73, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 
	0xa, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0x3c, 0x74, 0x64, 0x3e, 
	0x3c, 0x69, 0x6d, 0x67, 0x20, 0x73, 0x72, 0x63, 0x3d, 0x22, 
	0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 0x70, 0x6e, 0x67, 0x22, 
	0x20, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3d, 0x31, 0x30, 
	0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3d, 0x25, 0x21, 0x20, 
	0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x73, 
	0x20, 0x2f, 0x66, 0x69, 0x6c, 0x65, 0x73, 0x2e, 0x73, 0x68, 
	0x74, 0x6d, 0x6c, 0xa, 0x3e, 0x20, 0x3c, 0x2f, 0x74, 0x64, 
	0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 0xa, 0x3c, 0x74, 0x72, 
	0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x61, 0x20, 0x68, 0x72, 
	0x65, 0x66, 0x3d, 0x22, 0x2f, 0x74, 0x63, 0x70, 0x2e, 0x73, 
	0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x2f, 0x74, 0x63, 0x70, 
	0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0x3c, 0x2f, 0x61, 0x3e, 
	0x3c, 0x2f, 0x74, 0x64, 0x3e, 0xa, 0x3c, 0x74, 0x64, 0x3e, 
	0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 
	0x61, 0x74, 0x73, 0x20, 0x2f, 0x74, 0x63, 0x70, 0x2e, 0x73, 
	0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 
	0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x69, 0x6d, 0x67, 0x20, 0x73, 
	0x72, 0x63, 0x3d, 0x22, 0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 
	0x70, 0x6e, 0x67, 0x22, 0x20, 0x68, 0x65, 0x69, 0x67, 0x68, 
	0x74, 0x3d, 0x31, 0x30, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 
	0x3d, 0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 
	0x74, 0x61, 0x74, 0x73, 0x20, 0x2f, 0x74, 0x63, 0x70, 0x2e, 
	0x73, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3e, 0x20, 0x3c, 0x2f, 
	0x74, 0x64, 0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 0xa, 0x3c, 
	0x74, 0x72, 0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x61, 0x20, 
	0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x73, 0x74, 0x61, 
	0x74, 0x73, 0x2e, 0x73, 0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 
	0x2f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x2e, 0x73, 0x68, 0x74, 
	0x6d, 0x6c, 0x3c, 0x2f, 0x61, 0x3e, 0x3c, 0x2f, 0x74, 0x64, 
	0x3e, 0xa, 0x3c, 0x74, 0x64, 0x3e, 0x25, 0x21, 0x20, 0x66, 
	0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x20, 
	0x2f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x2e, 0x73, 0x68, 0x74, 
	0x6d, 0x6c, 0xa, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0x3c, 0x74, 
	0x64, 0x3e, 0x3c, 0x69, 0x6d, 0x67, 0x20, 0x73, 0x72, 0x63, 
	0x3d, 0x22, 0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 0x70, 0x6e, 
	0x67, 0x22, 0x20, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 0x3d, 
	0x31, 0x30, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3d, 0x25, 
	0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 0x61, 
	0x74, 0x73, 0x20, 0x2f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x2e, 
	0x73, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3e, 0x20, 0x3c, 0x2f, 
	0x74, 0x64, 0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 0xa, 0x3c, 
	0x74, 0x72, 0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x61, 0x20, 
	0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x73, 0x74, 0x79, 
	0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x22, 0x3e, 0x2f, 0x73, 
	0x74, 0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0x3c, 0x2f, 
	0x61, 0x3e, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0xa, 0x3c, 0x74, 
	0x64, 0x3e, 0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 
	0x73, 0x74, 0x61, 0x74, 0x73, 0x20, 0x2f, 0x73, 0x74, 0x79, 
	0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0xa, 0x3c, 0x2f, 0x74, 
	0x64, 0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x69, 0x6d, 0x67, 
	0x20, 0x73, 0x72, 0x63, 0x3d, 0x22, 0x2f, 0x66, 0x61, 0x64, 
	0x65, 0x2e, 0x70, 0x6e, 0x67, 0x22, 0x20, 0x68, 0x65, 0x69, 
	0x67, 0x68, 0x74, 0x3d, 0x31, 0x30, 0x20, 0x77, 0x69, 0x64, 
	0x74, 0x68, 0x3d, 0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 
	0x5f, 0x73, 0x74, 0x61, 0x74, 0x73, 0x20, 0x2f, 0x73, 0x74, 
	0x79, 0x6c, 0x65, 0x2e, 0x63, 0x73, 0x73, 0xa, 0x3e, 0x20, 
	0x3c, 0x2f, 0x74, 0x64, 0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 
	0xa, 0x3c, 0x74, 0x72, 0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 
	0x61, 0x20, 0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x34, 
	0x30, 0x34, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x22, 0x3e, 0x2f, 
	0x34, 0x30, 0x34, 0x2e, 0x68, 0x74, 0x6d, 0x6c, 0x3c, 0x2f, 
	0x61, 0x3e, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0xa, 0x3c, 0x74, 
	0x64, 0x3e, 0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 
	0x73, 0x74, 0x61, 0x74, 0x73, 0x20, 0x2f, 0x34, 0x30, 0x34, 
	0x2e, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3c, 0x2f, 0x74, 0x64, 
	0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x69, 0x6d, 0x67, 0x20, 
	0x73, 0x72, 0x63, 0x3d, 0x22, 0x2f, 0x66, 0x61, 0x64, 0x65, 
	0x2e, 0x70, 0x6e, 0x67, 0x22, 0x20, 0x68, 0x65, 0x69, 0x67, 
	0x68, 0x74, 0x3d, 0x31, 0x30, 0x20, 0x77, 0x69, 0x64, 0x74, 
	0x68, 0x3d, 0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 
	0x73, 0x74, 0x61, 0x74, 0x73, 0x20, 0x2f, 0x34, 0x30, 0x34, 
	0x2e, 0x68, 0x74, 0x6d, 0x6c, 0xa, 0x3e, 0x20, 0x3c, 0x2f, 
	0x74, 0x64, 0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 0xa, 0x3c, 
	0x74, 0x72, 0x3e, 0x3c, 0x74, 0x64, 0x3e, 0x3c, 0x61, 0x20, 
	0x68, 0x72, 0x65, 0x66, 0x3d, 0x22, 0x2f, 0x66, 0x61, 0x64, 
	0x65, 0x2e, 0x70, 0x6e, 0x67, 0x22, 0x3e, 0x2f, 0x66, 0x61, 
	0x64, 0x65, 0x2e, 0x70, 0x6e, 0x67, 0x3c, 0x2f, 0x61, 0x3e, 
	0x3c, 0x2f, 0x74, 0x64, 0x3e, 0xa, 0x3c, 0x74, 0x64, 0x3e, 
	0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 
	0x61, 0x74, 0x73, 0x20, 0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 
	0x70, 0x6e, 0x67, 0xa, 0x3c, 0x2f, 0x74, 0x64, 0x3e, 0x3c, 
	0x74, 0x64, 0x3e, 0x3c, 0x69, 0x6d, 0x67, 0x20, 0x73, 0x72, 
	0x63, 0x3d, 0x22, 0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 0x70, 
	0x6e, 0x67, 0x22, 0x20, 0x68, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x3d, 0x31, 0x30, 0x20, 0x77, 0x69, 0x64, 0x74, 0x68, 0x3d, 
	0x25, 0x21, 0x20, 0x66, 0x69, 0x6c, 0x65, 0x5f, 0x73, 0x74, 
	0x61, 0x74, 0x73, 0x20, 0x2f, 0x66, 0x61, 0x64, 0x65, 0x2e, 
	0x70, 0x6e, 0x67, 0xa, 0x3e, 0x20, 0x3c, 0x2f, 0x74, 0x64, 
	0x3e, 0x3c, 0x2f, 0x74, 0x72, 0x3e, 0xa, 0x3c, 0x2f, 0x74, 
	0x61, 0x62, 0x6c, 0x65, 0x3e, 0xa, 0x3c, 0x2f, 0x63, 0x65, 
	0x6e, 0x74, 0x65, 0x72, 0x3e, 0xa, 0x25, 0x21, 0x3a, 0x20, 
	0x2f, 0x66, 0x6f, 0x6f, 0x74, 0x65, 0x72, 0x2e, 0x68, 0x74, 
	0x6d, 0x6c, 0xa, 0};

const struct httpd_fsdata_file file_header_html[] = {{NULL, data_header_html, data_header_html + 13, sizeof(data_header_html) - 13}};

const struct httpd_fsdata_file file_413_html[] = {{file_header_html, data_413_html, data_413_html + 10, sizeof(data_413_html) - 10}};

const struct httpd_fsdata_file file_stats_shtml[] = {{file_413_html, data_stats_shtml, data_stats_shtml + 13, sizeof(data_stats_shtml) - 13}};

const struct httpd_fsdata_file file_tcp_shtml[] = {{file_stats_shtml, data_tcp_shtml, data_tcp_shtml + 11, sizeof(data_tcp_shtml) - 11}};

const struct httpd_fsdata_file file_style_css[] = {{file_tcp_shtml, data_style_css, data_style_css + 11, sizeof(data_style_css) - 11}};

const struct httpd_fsdata_file file_404_html[] = {{file_style_css, data_404_html, data_404_html + 10, sizeof(data_404_html) - 10}};

const struct httpd_fsdata_file file_processes_shtml[] = {{file_404_html, data_processes_shtml, data_processes_shtml + 17, sizeof(data_processes_shtml) - 17}};

const struct httpd_fsdata_file file_footer_html[] = {{file_processes_shtml, data_footer_html, data_footer_html + 13, sizeof(data_footer_html) - 13}};

const struct httpd_fsdata_file file_hello_shtml[] = {{file_footer_html, data_hello_shtml, data_hello_shtml + 13, sizeof(data_hello_shtml) - 13}};

const struct httpd_fsdata_file file_fade_png[] = {{file_hello_shtml, data_fade_png, data_fade_png + 10, sizeof(data_fade_png) - 10}};

const struct httpd_fsdata_file file_index_html[] = {{file_fade_png, data_index_html, data_index_html + 12, sizeof(data_index_html) - 12}};

const struct httpd_fsdata_file file_files_shtml[] = {{file_index_html, data_files_shtml, data_files_shtml + 13, sizeof(data_files_shtml) - 13}};

#define HTTPD_FS_ROOT file_files_shtml

#define HTTPD_FS_NUMFILES 12
