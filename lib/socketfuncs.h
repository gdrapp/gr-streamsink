/* -*- c++ -*- */
/*
* Copyright 2015 Martin Lehner - HES-SO Valais-Wallis
*
* This file is part of gr-streamsink
*
* gr-streamsink is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3, or (at your option)
* any later version.
*
* gr-streamsink is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with gr-streamsink. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef INCLUDED_SOCKETFUNCS_H
#define INCLUDED_SOCKETFUNCS_H

#include <sys/socket.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string>
#include <stdio.h>
#include <unistd.h>

void close_socket(int sock);
int create_socket(std::string address, int port);

#endif /* INCLUDED_SOCKETFUNCS_H */
