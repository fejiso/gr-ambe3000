/*
 * Copyright 2012 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

/*
 * This class gathers together all the test cases for the gr-filter
 * directory into a single test suite.  As you create new test cases,
 * add them here.
 */

#include "qa_ambe3000.h"
#include "qa_dstar_encode_sb.h"
#include "qa_dstar_decode_bs.h"
#include "qa_bit_reverse_bb.h"

CppUnit::TestSuite *
qa_ambe3000::suite()
{
  CppUnit::TestSuite *s = new CppUnit::TestSuite("ambe3000");
  s->addTest(gr::ambe3000::qa_dstar_encode_sb::suite());
  s->addTest(gr::ambe3000::qa_dstar_decode_bs::suite());
  s->addTest(gr::ambe3000::qa_bit_reverse_bb::suite());

  return s;
}
