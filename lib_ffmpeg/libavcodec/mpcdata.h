/*
 * Musepack decoder
 * Copyright (c) 2006 Konstantin Shishkov
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_MPCDATA_H
#define AVCODEC_MPCDATA_H

#include <stdint.h>

static const float mpc_CC[18] = {
    65536.0000, 21845.3333, 13107.2000, 9362.2857, 7281.7778, 4369.0667, 2114.0645,
    1040.2539, 516.0315, 257.0039, 128.2505, 64.0626, 32.0156, 16.0039, 8.0010,
    4.0002, 2.0001, 1.0000
};

static const float mpc_SCF[128] = {
    307.330047607421875000, 255.999984741210937500, 213.243041992187500000, 177.627334594726562500,
    147.960128784179687500, 123.247924804687500000, 102.663139343261718750, 85.516410827636718750,
    71.233520507812500000, 59.336143493652343750, 49.425861358642578125, 41.170787811279296875,
    34.294471740722656250, 28.566631317138671875, 23.795452117919921875, 19.821151733398437500,
    16.510635375976562500, 13.753040313720703125, 11.456016540527343750, 9.542640686035156250,
    7.948835372924804688, 6.621226310729980469, 5.515353679656982422, 4.594182968139648438,
    3.826865673065185547, 3.187705039978027344, 2.655296564102172852, 2.211810588836669922,
    1.842395424842834473, 1.534679770469665527, 1.278358578681945801, 1.064847946166992188,
    0.886997759342193604, 0.738851964473724365, 0.615449428558349609, 0.512657463550567627,
    0.427033752202987671, 0.355710864067077637, 0.296300262212753296, 0.246812388300895691,
    0.205589950084686279, 0.171252459287643433, 0.142649993300437927, 0.118824683129787445,
    0.098978661000728607, 0.082447312772274017, 0.068677015602588654, 0.057206626981496811,
    0.047652013599872589, 0.039693206548690796, 0.033063672482967377, 0.027541399002075195,
    0.022941453382372856, 0.019109787419438362, 0.015918083488941193, 0.013259455561637878,
    0.011044870130717754, 0.009200163185596466, 0.007663558237254620, 0.006383595988154411,
    0.005317411851137877, 0.004429301247000694, 0.003689522389322519, 0.003073300700634718,
    0.002560000168159604, 0.002132430672645569, 0.001776273478753865, 0.001479601487517357,
    0.001232479466125369, 0.001026631565764546, 0.000855164253152907, 0.000712335284333676,
    0.000593361502978951, 0.000494258652906865, 0.000411707907915115, 0.000342944724252447,
    0.000285666319541633, 0.000237954518524930, 0.000198211506358348, 0.000165106350323185,
    0.000137530398205854, 0.000114560163638089, 0.000095426403277088, 0.000079488345363643,
    0.000066212254751008, 0.000055153526773211, 0.000045941822463647, 0.000038268648495432,
    0.000031877043511486, 0.000026552961571724, 0.000022118103515822, 0.000018423952496960,
    0.000015346795407822, 0.000012783583770215, 0.000010648477655195, 0.000008869976227288,
    0.000007388518497464, 0.000006154492893984, 0.000005126573796588, 0.000004270336830814,
    0.000003557107902452, 0.000002963002089018, 0.000002468123511790, 0.000002055899130937,
    0.000001712524181130, 0.000001426499579793, 0.000001188246528727, 0.000000989786371974,
    0.000000824472920158, 0.000000686770022185, 0.000000572066142013, 0.000000476520028769,
    0.000000396931966407, 0.000000330636652279, 0.000000275413924555, 0.000000229414467867,
    0.000000191097811353, 0.000000159180785886, 0.000000132594522029, 0.000000110448674207,
    0.000000092001613439, 0.000000076635565449, 0.000000063835940978, 0.000000053174105119,
    0.000000044293003043, 0.000000036895215771, 0.000000030733001921, 0.000000025599996789
};

#endif /* AVCODEC_MPCDATA_H */
