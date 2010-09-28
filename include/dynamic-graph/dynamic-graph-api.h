/*
 * Copyright 2010,
 * François Bleibel,
 * Olivier Stasse,
 *
 * CNRS/AIST
 *
 * This file is part of dynamic-graph.
 * dynamic-graph is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 * dynamic-graph is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.  You should
 * have received a copy of the GNU Lesser General Public License along
 * with dynamic-graph.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DYNAMICGRAPH_API_H
#define DYNAMICGRAPH_API_H

#if defined (WIN32)
#  ifdef dynamic_graph_EXPORTS
#    define DYNAMICGRAPH_EXPORT __declspec(dllexport)
#  else
#    define DYNAMICGRAPH_EXPORT __declspec(dllimport)
#  endif
#else
#  define DYNAMICGRAPH_EXPORT
#endif

#endif
