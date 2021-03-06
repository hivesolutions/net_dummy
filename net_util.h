/*
 Hive Drivers
 Copyright (C) 2008-2015 Hive Solutions Lda.

 This file is part of Hive Drivers.

 Hive Drivers is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Hive Drivers is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Hive Drivers. If not, see <http://www.gnu.org/licenses/>.

 __author__    = João Magalhães <joamag@hive.pt>
 __version__   = 1.0.0
 __revision__  = $LastChangedRevision$
 __date__      = $LastChangedDate$
 __copyright__ = Copyright (c) 2008-2015 Hive Solutions Lda.
 __license__   = GNU General Public License (GPL), Version 3
*/

#pragma once

#define MAC_HEADER_OFFSET 2
#define MAC_ADDRESS_SIZE 6
#define IP_ADDRESS_SIZE 4
#define SUM_ADDRESS_SIZE 10

#define IS_ARP_REQUEST(mac_header) mac_header[12] == 0x08 && mac_header[13] == 0x06
#define IS_IP_REQUEST(mac_header) mac_header[12] == 0x08 && mac_header[13] == 0x00

short icmp_checksum_c(unsigned short *buffer, unsigned int len);
unsigned short udp_checksum_c(unsigned short len_udp, unsigned char *src_addr, unsigned char *dest_addr, bool padding, unsigned char *buff);
void print_addr_c(unsigned char *addr);
void print_head_c(struct sk_buff *skb);
void print_data_c(struct sk_buff *skb);
