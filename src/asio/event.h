/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2012, ruki All rights reserved.
 *
 * @author		ruki
 * @file		event.h
 * @ingroup 	asio
 *
 */
#ifndef TB_ASIO_AICP_EVENT_H
#define TB_ASIO_AICP_EVENT_H

/* ///////////////////////////////////////////////////////////////////////
 * includes
 */
#include "aicp.h"

/* ///////////////////////////////////////////////////////////////////////
 * types
 */

/*! the aicp event func type
 *
 * @param data 		the timer data
 */
typedef tb_void_t 	(*tb_aicp_event_func_t)(tb_pointer_t data);

/* ///////////////////////////////////////////////////////////////////////
 * interfaces
 */

/*! init event
 * 
 * @param aicp 		the aicp 
 * @param func 		the func 
 * @param data 		the data 
 *
 * @return 			the event
 */
tb_handle_t 		tb_aicp_event_init(tb_aicp_t* aicp, tb_aicp_event_func_t func, tb_pointer_t data);

/*! exit event
 * 
 * @param aicp 		the aicp 
 * @param event 	the event
 */
tb_void_t 			tb_aicp_event_exit(tb_aicp_t* aicp, tb_handle_t event);

/*! post event
 * 
 * @param aicp 		the aicp 
 * @param event 	the event
 *
 * @return 			tb_true or tb_false
 */
tb_bool_t 			tb_aicp_event_post(tb_aicp_t* aicp, tb_handle_t event);

#endif