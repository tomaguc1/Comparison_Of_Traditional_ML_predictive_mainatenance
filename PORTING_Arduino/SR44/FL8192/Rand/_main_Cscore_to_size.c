#include <stdio.h>
#include <math.h>
#include <string.h>

void add_vectors(double *v1, double *v2, int size, double *result);
void mul_vector_number(double *v1, double num, int size, double *result);
void score(double * input, double * output);

int main() {
    // Main Function Body
    double inputArr[2844];
    double outputScore[2];

    double result;
    score(inputArr, outputScore);
    // result = sigmoid(outputScore[1]);
    return 0;
}

#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[2];
    double var1[2];
    double var2[2];
    double var3[2];
    double var4[2];
    double var5[2];
    double var6[2];
    double var7[2];
    double var8[2];
    double var9[2];
    double var10[2];
    double var11[2];
    double var12[2];
    double var13[2];
    if (input[98] <= 0.07611083984375) {
        if (input[130] <= 0.09533143043518066) {
            if (input[77] <= 0.12530517578125) {
                if (input[284] <= 0.05519296042621136) {
                    if (input[267] <= 0.0442668441683054) {
                        if (input[215] <= 0.026860389858484268) {
                            if (input[59] <= 0.0736083984375) {
                                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[216] <= 0.02495903428643942) {
                                if (input[241] <= 0.00005283974860503804) {
                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[342] <= 0.00007578402073704638) {
                                        if (input[79] <= 0.06353759765625) {
                                            memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[355] <= 0.00005104096999275498) {
                                    if (input[307] <= 0.04307457618415356) {
                                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[132] <= 0.09564780071377754) {
                                        if (input[158] <= 0.05218512564897537) {
                                            memcpy(var13, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                        } else {
                                            if (input[80] <= 0.059326171875) {
                                                memcpy(var13, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                            } else {
                                                if (input[236] <= 0.00014682081382488832) {
                                                    if (input[86] <= 0.12054443359375) {
                                                        if (input[3] <= 0.2559814453125) {
                                                            memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[100] <= 0.03497314453125) {
                                                        if (input[73] <= 0.07977294921875) {
                                                            memcpy(var13, (double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[214] <= 0.08448891341686249) {
                                                            if (input[96] <= 0.08172607421875) {
                                                                if (input[242] <= 0.000051523429647204466) {
                                                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[73] <= 0.11480712890625) {
                                                                        if (input[61] <= 0.111572265625) {
                                                                            if (input[220] <= 0.0025793610839173198) {
                                                                                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[149] <= 0.0901651605963707) {
                                                                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var13, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[264] <= 0.04221758432686329) {
                                                                if (input[132] <= 0.08869006112217903) {
                                                                    if (input[333] <= 0.020438739098608494) {
                                                                        if (input[282] <= 0.020182178355753422) {
                                                                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var13, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[18] <= 0.12127685546875) {
                                                                            if (input[190] <= 0.3581051379442215) {
                                                                                if (input[33] <= 0.12274169921875) {
                                                                                    if (input[110] <= 0.04327392578125) {
                                                                                        if (input[305] <= 0.03518407419323921) {
                                                                                            memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[94] <= 0.06195068359375) {
                                                                                            if (input[112] <= 0.20294189453125) {
                                                                                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[97] <= 0.04766845703125) {
                                                                                                if (input[216] <= 0.15257154405117035) {
                                                                                                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var13, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[141] <= 0.16478035598993301) {
                                                                                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[148] <= 0.23348436504602432) {
                                                                        if (input[134] <= 0.060055842623114586) {
                                                                            memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[121] <= 0.0001462986838305369) {
                                                                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[228] <= 0.0001678114858805202) {
                                                                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[339] <= 0.006220214883796871) {
                                                                                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var13, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var13, (double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[100] <= 0.05218505859375) {
                                            if (input[248] <= 0.009688753169029951) {
                                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var13, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[222] <= 0.006164537044242024) {
                                                if (input[315] <= 0.050424570217728615) {
                                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[75] <= 0.11309814453125) {
                                                    if (input[243] <= 0.00005834952935401816) {
                                                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[175] <= 0.3480965197086334) {
                            if (input[165] <= 0.17036215215921402) {
                                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[86] <= 0.06744384765625) {
                                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[105] <= 0.0677490234375) {
                    memcpy(var13, (double[]){0.8, 0.2}, 2 * sizeof(double));
                } else {
                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[142] <= 0.14756689220666885) {
                if (input[64] <= 0.08843994140625) {
                    if (input[194] <= 0.28161412477493286) {
                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[144] <= 0.1472720429301262) {
                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[181] <= 0.1667112112045288) {
                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[156] <= 0.1991804987192154) {
                            if (input[1] <= 0.28009033203125) {
                                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[47] <= 0.0845947265625) {
            if (input[132] <= 0.06684134155511856) {
                if (input[355] <= 0.00005901555414311588) {
                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[47] <= 0.269287109375) {
                if (input[107] <= 0.04132080078125) {
                    if (input[229] <= 0.00021919528080616146) {
                        memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[313] <= 0.000053592175390804186) {
                    memcpy(var13, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var13, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    double var14[2];
    if (input[68] <= 0.11590576171875) {
        if (input[283] <= 0.05589218810200691) {
            if (input[264] <= 0.04222901351749897) {
                if (input[97] <= 0.07879638671875) {
                    if (input[259] <= 0.03786390274763107) {
                        if (input[311] <= 0.011614720337092876) {
                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[69] <= 0.057373046875) {
                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[333] <= 0.02344055473804474) {
                                    if (input[12] <= 0.05755615234375) {
                                        if (input[344] <= 0.00006406307147699408) {
                                            if (input[192] <= 0.1726713553071022) {
                                                if (input[66] <= 0.1046142578125) {
                                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var14, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var14, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[320] <= 0.022125872783362865) {
                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[293] <= 0.024452554993331432) {
                                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[68] <= 0.0989990234375) {
                                            if (input[322] <= 0.04101311229169369) {
                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[263] <= 0.026505772955715656) {
                                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[100] <= 0.03472900390625) {
                                        if (input[346] <= 0.00006224004573596176) {
                                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 0.06011962890625) {
                                            if (input[29] <= 0.0718994140625) {
                                                if (input[110] <= 0.21734619140625) {
                                                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[133] <= 0.09985824674367905) {
                                                if (input[9] <= 0.14788818359375) {
                                                    if (input[23] <= 0.13128662109375) {
                                                        if (input[143] <= 0.245765820145607) {
                                                            if (input[123] <= 0.00014522233686875552) {
                                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[339] <= 0.02761214505881071) {
                                                                    if (input[247] <= 0.0033555502304807305) {
                                                                        if (input[268] <= 0.02971451636403799) {
                                                                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[93] <= 0.126953125) {
                                                                            if (input[9] <= 0.14776611328125) {
                                                                                if (input[120] <= 0.00014337281027110294) {
                                                                                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[95] <= 0.052734375) {
                                                                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[47] <= 0.115234375) {
                                                                                            if (input[36] <= 0.12396240234375) {
                                                                                                if (input[210] <= 0.0845872052013874) {
                                                                                                    memcpy(var14, (double[]){0.8333333333333334, 0.16666666666666666}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[354] <= 0.00005867790059710387) {
                                                                                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[339] <= 0.0004640874685719609) {
                                                                                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[231] <= 0.00018112386896973476) {
                                                                                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[153] <= 0.12063528597354889) {
                                                                                                                    if (input[107] <= 0.0423583984375) {
                                                                                                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[326] <= 0.03592262789607048) {
                                                                                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var14, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[353] <= 0.00010447005479363725) {
                                                                        memcpy(var14, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var14, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[336] <= 0.0027851248160004616) {
                                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[117] <= 0.08258056640625) {
                                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[298] <= 0.05162172578275204) {
                                                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[59] <= 0.08917236328125) {
                                                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[104] <= 0.06695556640625) {
                                                    if (input[22] <= 0.06683349609375) {
                                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[289] <= 0.05532706715166569) {
                                                            if (input[93] <= 0.0596923828125) {
                                                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[344] <= 0.0002376317570451647) {
                                                                    if (input[178] <= 0.23255476355552673) {
                                                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[338] <= 0.031142959371209145) {
                                                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[160] <= 0.18430721014738083) {
                                                                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var14, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[110] <= 0.16241455078125) {
                                                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[347] <= 0.0012231035289005376) {
                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[241] <= 0.000055291387980105355) {
                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[68] <= 0.0760498046875) {
                        if (input[172] <= 0.18064014613628387) {
                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 0.15045166015625) {
                            if (input[246] <= 0.000055113734561018646) {
                                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[12] <= 0.05523681640625) {
                                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[272] <= 0.04309106059372425) {
                    if (input[138] <= 0.15607725083827972) {
                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[150] <= 0.15351378917694092) {
                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[268] <= 0.03829566203057766) {
                memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[62] <= 0.11627197265625) {
            if (input[169] <= 0.16260598599910736) {
                if (input[96] <= 0.0870361328125) {
                    if (input[245] <= 0.00005269914254313335) {
                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[285] <= 0.02518320083618164) {
                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[300] <= 0.029179485514760017) {
                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[69] <= 0.26361083984375) {
                if (input[225] <= 0.022271313704550266) {
                    if (input[88] <= 0.1102294921875) {
                        if (input[55] <= 0.108154296875) {
                            memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[213] <= 0.001885652367491275) {
                    memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[129] <= 0.00017318714526481926) {
                        memcpy(var14, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var14, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var13, var14, 2, var12);
    double var15[2];
    if (input[43] <= 0.120361328125) {
        if (input[285] <= 0.0547102652490139) {
            if (input[269] <= 0.04527817480266094) {
                if (input[98] <= 0.076904296875) {
                    if (input[244] <= 0.00005059237992099952) {
                        if (input[322] <= 0.04038497619330883) {
                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[39] <= 0.08447265625) {
                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[96] <= 0.09124755859375) {
                            if (input[36] <= 0.06256103515625) {
                                if (input[6] <= 0.27392578125) {
                                    if (input[153] <= 0.09538798034191132) {
                                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[282] <= 0.04412475787103176) {
                                            if (input[136] <= 0.08186653256416321) {
                                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[256] <= 0.03738800063729286) {
                                    if (input[101] <= 0.04815673828125) {
                                        if (input[253] <= 0.018154345452785492) {
                                            if (input[329] <= 0.025612689554691315) {
                                                if (input[272] <= 0.0250170836225152) {
                                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[250] <= 0.011401528492569923) {
                                                    if (input[338] <= 0.0024714439059607685) {
                                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[89] <= 0.1025390625) {
                                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var15, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= 0.1280517578125) {
                                            if (input[65] <= 0.0594482421875) {
                                                memcpy(var15, (double[]){0.2222222222222222, 0.7777777777777778}, 2 * sizeof(double));
                                            } else {
                                                if (input[68] <= 0.059326171875) {
                                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[86] <= 0.0606689453125) {
                                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[335] <= 0.005523827858269215) {
                                                            if (input[98] <= 0.04901123046875) {
                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[53] <= 0.057861328125) {
                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[345] <= 0.0000516091149620479) {
                                                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[120] <= 0.00015004866145318374) {
                                                                        if (input[337] <= 0.021917657926678658) {
                                                                            if (input[147] <= 0.13618332147598267) {
                                                                                if (input[43] <= 0.10687255859375) {
                                                                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[245] <= 0.00005074963155493606) {
                                                                            if (input[99] <= 0.05303955078125) {
                                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[23] <= 0.13128662109375) {
                                                                                if (input[111] <= 0.03668212890625) {
                                                                                    if (input[18] <= 0.08782958984375) {
                                                                                        if (input[40] <= 0.07232666015625) {
                                                                                            memcpy(var15, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var15, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[239] <= 0.000049755875807022676) {
                                                                                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[340] <= 0.032122920267283916) {
                                                                                            if (input[79] <= 0.12908935546875) {
                                                                                                if (input[129] <= 0.07784723863005638) {
                                                                                                    if (input[100] <= 0.03497314453125) {
                                                                                                        if (input[33] <= 0.0797119140625) {
                                                                                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[21] <= 0.11859130859375) {
                                                                                                            if (input[319] <= 0.017328095622360706) {
                                                                                                                if (input[9] <= 0.140869140625) {
                                                                                                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[30] <= 0.06597900390625) {
                                                                                                                    if (input[251] <= 0.012508094310760498) {
                                                                                                                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[111] <= 0.05706787109375) {
                                                                                                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[72] <= 0.11724853515625) {
                                                                                                                        if (input[107] <= 0.04010009765625) {
                                                                                                                            if (input[348] <= 0.00016516675532329828) {
                                                                                                                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[140] <= 0.21117813885211945) {
                                                                                                                                if (input[229] <= 0.00016230138862738386) {
                                                                                                                                    if (input[131] <= 0.06222383864223957) {
                                                                                                                                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var15, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[224] <= 0.011211761768208817) {
                                                                                                                                    memcpy(var15, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[334] <= 0.03183303494006395) {
                                                                                                                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[281] <= 0.034515272825956345) {
                                                                                                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[126] <= 0.06530925258994102) {
                                                                                                        if (input[349] <= 0.000056567096180515364) {
                                                                                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[283] <= 0.051960188895463943) {
                                                                                                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var15, (double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var15, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[26] <= 0.117431640625) {
                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[254] <= 0.01323231402784586) {
                        if (input[87] <= 0.0870361328125) {
                            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var15, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[7] <= 0.22857666015625) {
                            memcpy(var15, (double[]){0.36363636363636365, 0.6363636363636364}, 2 * sizeof(double));
                        } else {
                            if (input[94] <= 0.068359375) {
                                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[110] <= 0.0650634765625) {
                    if (input[224] <= 0.09490061551332474) {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[159] <= 0.18394597619771957) {
                memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[4] <= 0.29107666015625) {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var15, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[332] <= 0.00010324365211999975) {
            memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[9] <= 0.19207763671875) {
                if (input[68] <= 0.1156005859375) {
                    if (input[97] <= 0.070556640625) {
                        memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[331] <= 0.012387097001919756) {
                    memcpy(var15, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var15, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var12, var15, 2, var11);
    double var16[2];
    if (input[267] <= 0.04424802586436272) {
        if (input[49] <= 0.1168212890625) {
            if (input[335] <= 0.006309577496722341) {
                if (input[219] <= 0.00029570212063845247) {
                    if (input[46] <= 0.09027099609375) {
                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[100] <= 0.035400390625) {
                    if (input[251] <= 0.009732062928378582) {
                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[130] <= 0.09585810080170631) {
                        if (input[246] <= 0.00015817456733202562) {
                            if (input[118] <= 0.05718994140625) {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[161] <= 0.059432199224829674) {
                                    if (input[4] <= 0.2705078125) {
                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[102] <= 0.029541015625) {
                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[72] <= 0.05767822265625) {
                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[209] <= 0.08500823378562927) {
                                                if (input[344] <= 0.00006313654739642516) {
                                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[239] <= 0.00004990703564544674) {
                                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    if (input[79] <= 0.105712890625) {
                                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[220] <= 0.014541957061737776) {
                                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[38] <= 0.12255859375) {
                                if (input[354] <= 0.00005197867903916631) {
                                    if (input[338] <= 0.0021111686946824193) {
                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[85] <= 0.09185791015625) {
                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[95] <= 0.09613037109375) {
                                        if (input[28] <= 0.05950927734375) {
                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[78] <= 0.0614013671875) {
                                                if (input[324] <= 0.04739616438746452) {
                                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[102] <= 0.03680419921875) {
                                                    if (input[261] <= 0.01876941602677107) {
                                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[336] <= 0.038577113300561905) {
                                                        if (input[10] <= 0.03240966796875) {
                                                            memcpy(var16, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[2] <= 0.27532958984375) {
                                                                if (input[259] <= 0.03720741532742977) {
                                                                    if (input[117] <= 0.24676513671875) {
                                                                        if (input[234] <= 0.00020571429922711104) {
                                                                            if (input[353] <= 0.0000591902371525066) {
                                                                                if (input[238] <= 0.00003798444049607497) {
                                                                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[197] <= 0.13176273554563522) {
                                                                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[319] <= 0.04698273725807667) {
                                                                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var16, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[39] <= 0.11065673828125) {
                                                                                if (input[109] <= 0.04315185546875) {
                                                                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[96] <= 0.0804443359375) {
                                                                            if (input[79] <= 0.05865478515625) {
                                                                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[205] <= 0.07261855900287628) {
                                                                                    memcpy(var16, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[254] <= 0.022011141292750835) {
                                                                                        if (input[70] <= 0.12054443359375) {
                                                                                            if (input[113] <= 0.22515869140625) {
                                                                                                if (input[72] <= 0.06768798828125) {
                                                                                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[219] <= 0.0021136883879080415) {
                                                                                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[138] <= 0.2363041788339615) {
                                                                                                    if (input[204] <= 0.08369938656687737) {
                                                                                                        if (input[8] <= 0.20111083984375) {
                                                                                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var16, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[342] <= 0.00578166195191443) {
                                                                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[89] <= 0.083740234375) {
                                                                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[157] <= 0.33223918080329895) {
                                                                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[101] <= 0.0357666015625) {
                                                                    memcpy(var16, (double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[127] <= 0.015914124436676502) {
                                                                        memcpy(var16, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[66] <= 0.06781005859375) {
                                                                            if (input[240] <= 0.000055783566494937986) {
                                                                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var16, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var16, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[342] <= 0.005326708545908332) {
                                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[247] <= 0.007248894777148962) {
                                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[224] <= 0.010810382198542356) {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[339] <= 0.02553048264235258) {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[343] <= 0.0016812682151794434) {
                if (input[15] <= 0.251708984375) {
                    if (input[86] <= 0.27618408203125) {
                        if (input[229] <= 0.0001565911661600694) {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[283] <= 0.00005364332173485309) {
                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[126] <= 0.0017002406239043921) {
                            memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[70] <= 0.11761474609375) {
                    if (input[255] <= 0.02313401736319065) {
                        if (input[63] <= 0.123291015625) {
                            if (input[237] <= 0.001967854768736288) {
                                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[244] <= 0.00006463961290137377) {
            if (input[175] <= 0.17066705226898193) {
                memcpy(var16, (double[]){0.5, 0.5}, 2 * sizeof(double));
            } else {
                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[298] <= 0.0386254508048296) {
                memcpy(var16, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var16, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var11, var16, 2, var10);
    double var17[2];
    if (input[96] <= 0.08355712890625) {
        if (input[285] <= 0.05576593987643719) {
            if (input[272] <= 0.0509385596960783) {
                if (input[354] <= 0.00005180858352105133) {
                    if (input[179] <= 0.15079059451818466) {
                        if (input[219] <= 0.02069104101974517) {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[75] <= 0.08294677734375) {
                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[263] <= 0.043134063482284546) {
                        if (input[52] <= 0.054443359375) {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[99] <= 0.03997802734375) {
                                if (input[255] <= 0.016652505844831467) {
                                    if (input[130] <= 0.05089843459427357) {
                                        if (input[131] <= 0.05961128510534763) {
                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[23] <= 0.12554931640625) {
                                    if (input[258] <= 0.03829232417047024) {
                                        if (input[98] <= 0.03125) {
                                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[262] <= 0.04298582673072815) {
                                                if (input[356] <= 0.0008483972342219204) {
                                                    if (input[28] <= 0.05462646484375) {
                                                        memcpy(var17, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                                    } else {
                                                        if (input[119] <= 0.00014524291327688843) {
                                                            if (input[216] <= 0.03610946238040924) {
                                                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var17, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[30] <= 0.06146240234375) {
                                                                if (input[167] <= 0.18798421323299408) {
                                                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[67] <= 0.1239013671875) {
                                                                    if (input[56] <= 0.0516357421875) {
                                                                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[41] <= 0.05712890625) {
                                                                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[32] <= 0.1297607421875) {
                                                                                if (input[40] <= 0.054931640625) {
                                                                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[66] <= 0.1229248046875) {
                                                                                        if (input[58] <= 0.05816650390625) {
                                                                                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[43] <= 0.12615966796875) {
                                                                                                if (input[49] <= 0.059814453125) {
                                                                                                    if (input[349] <= 0.00007805653513059951) {
                                                                                                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[101] <= 0.05133056640625) {
                                                                                                        if (input[215] <= 0.08557335287332535) {
                                                                                                            if (input[27] <= 0.1011962890625) {
                                                                                                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[68] <= 0.0865478515625) {
                                                                                                                if (input[22] <= 0.09600830078125) {
                                                                                                                    if (input[33] <= 0.060302734375) {
                                                                                                                        memcpy(var17, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[97] <= 0.05133056640625) {
                                                                                                                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[109] <= 0.2408447265625) {
                                                                                                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[36] <= 0.12408447265625) {
                                                                                                            if (input[265] <= 0.043453752994537354) {
                                                                                                                if (input[132] <= 0.06155042350292206) {
                                                                                                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[155] <= 0.07922448962926865) {
                                                                                                                        memcpy(var17, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[57] <= 0.11895751953125) {
                                                                                                                            if (input[33] <= 0.0621337890625) {
                                                                                                                                memcpy(var17, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[130] <= 0.09960705786943436) {
                                                                                                                                    if (input[218] <= 0.0007109083817340434) {
                                                                                                                                        memcpy(var17, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[21] <= 0.0657958984375) {
                                                                                                                                            if (input[68] <= 0.0809326171875) {
                                                                                                                                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[222] <= 0.00579532771371305) {
                                                                                                                                                if (input[267] <= 0.030574536882340908) {
                                                                                                                                                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[101] <= 0.05364990234375) {
                                                                                                                                                    if (input[15] <= 0.06280517578125) {
                                                                                                                                                        memcpy(var17, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[284] <= 0.051319973543286324) {
                                                                                                                                                        if (input[118] <= 0.21185302734375) {
                                                                                                                                                            if (input[18] <= 0.11676025390625) {
                                                                                                                                                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var17, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[345] <= 0.012316858861595392) {
                                                                                                                                                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var17, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[242] <= 0.00005642483120027464) {
                                                                                                                                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var17, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[11] <= 0.05853271484375) {
                                                                                                                                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[221] <= 0.03993669152259827) {
                                                                                                                                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var17, (double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var17, (double[]){0.5714285714285714, 0.42857142857142855}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var17, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var17, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var17, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[204] <= 0.3654377609491348) {
                                            if (input[300] <= 0.04299783147871494) {
                                                memcpy(var17, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var17, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 0.2877197265625) {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[170] <= 0.21136339008808136) {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[127] <= 0.002103768929373473) {
            if (input[112] <= 0.28106689453125) {
                if (input[155] <= 0.0001587147853570059) {
                    memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[9] <= 0.173828125) {
                if (input[71] <= 0.07763671875) {
                    if (input[245] <= 0.000056927949117380194) {
                        memcpy(var17, (double[]){0.2, 0.8}, 2 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[122] <= 0.00017843748355517164) {
                        memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[340] <= 0.00903578381985426) {
                            memcpy(var17, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var17, (double[]){0.5, 0.5}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var17, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var10, var17, 2, var9);
    double var18[2];
    if (input[97] <= 0.07891845703125) {
        if (input[262] <= 0.041111476719379425) {
            if (input[335] <= 0.007878858596086502) {
                if (input[340] <= 0.00007318652205867693) {
                    if (input[276] <= 0.01178678311407566) {
                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[61] <= 0.0760498046875) {
                        if (input[231] <= 0.00017377097537973896) {
                            memcpy(var18, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                        } else {
                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[280] <= 0.053724467754364014) {
                    if (input[133] <= 0.0998491533100605) {
                        if (input[334] <= 0.01841138955205679) {
                            if (input[279] <= 0.027475318871438503) {
                                if (input[225] <= 0.00021562084293691441) {
                                    if (input[76] <= 0.12200927734375) {
                                        if (input[127] <= 0.01534806564450264) {
                                            memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[113] <= 0.2469482421875) {
                                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[63] <= 0.1107177734375) {
                                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[94] <= 0.05572509765625) {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[301] <= 0.01806557457894087) {
                                    memcpy(var18, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                } else {
                                    if (input[27] <= 0.0562744140625) {
                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[235] <= 0.00014616531552746892) {
                                            memcpy(var18, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                        } else {
                                            if (input[58] <= 0.12957763671875) {
                                                if (input[236] <= 0.0001452319193049334) {
                                                    memcpy(var18, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                } else {
                                                    if (input[33] <= 0.1328125) {
                                                        if (input[40] <= 0.06048583984375) {
                                                            memcpy(var18, (double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[59] <= 0.1275634765625) {
                                                                if (input[143] <= 0.2736463248729706) {
                                                                    if (input[82] <= 0.0609130859375) {
                                                                        if (input[255] <= 0.020669166930019855) {
                                                                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var18, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[101] <= 0.02685546875) {
                                                                            memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[354] <= 0.0000494805135531351) {
                                                                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[112] <= 0.222412109375) {
                                                                                    if (input[50] <= 0.06640625) {
                                                                                        if (input[312] <= 0.03875124640762806) {
                                                                                            memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[66] <= 0.06781005859375) {
                                                                                            if (input[201] <= 0.15492713451385498) {
                                                                                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[108] <= 0.04388427734375) {
                                                                                                memcpy(var18, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[105] <= 0.089111328125) {
                                                                                                    if (input[196] <= 0.24036233127117157) {
                                                                                                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[98] <= 0.07373046875) {
                                                                                                            if (input[130] <= 0.10698013380169868) {
                                                                                                                if (input[17] <= 0.08880615234375) {
                                                                                                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[272] <= 0.0430807750672102) {
                                                                                                                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var18, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var18, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[179] <= 0.24874350428581238) {
                                                                                                        if (input[256] <= 0.023314135149121284) {
                                                                                                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[238] <= 0.000035796572774415836) {
                                                                                        memcpy(var18, (double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[115] <= 0.24188232421875) {
                                                                                            if (input[118] <= 0.1689453125) {
                                                                                                memcpy(var18, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[59] <= 0.08355712890625) {
                                                                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var18, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[221] <= 0.016735870391130447) {
                            if (input[176] <= 0.13968046009540558) {
                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[222] <= 0.007599578704684973) {
                                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[42] <= 0.1138916015625) {
                                    if (input[280] <= 0.05265771597623825) {
                                        if (input[156] <= 0.3949873745441437) {
                                            if (input[338] <= 0.031142959371209145) {
                                                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[149] <= 0.19728444516658783) {
                                                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            memcpy(var18, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[344] <= 0.006530152866616845) {
                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[144] <= 0.14638064056634903) {
                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[139] <= 0.15508819371461868) {
                    memcpy(var18, (double[]){0.75, 0.25}, 2 * sizeof(double));
                } else {
                    if (input[111] <= 0.03436279296875) {
                        memcpy(var18, (double[]){0.2, 0.8}, 2 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[333] <= 0.00024987885262817144) {
            if (input[337] <= 0.000053023028158349916) {
                memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[56] <= 0.0789794921875) {
                if (input[142] <= 0.12846674025058746) {
                    if (input[317] <= 0.022459582425653934) {
                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[22] <= 0.0650634765625) {
                    memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[72] <= 0.07244873046875) {
                        memcpy(var18, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                    } else {
                        if (input[246] <= 0.000055113734561018646) {
                            memcpy(var18, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[60] <= 0.073486328125) {
                                memcpy(var18, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                            } else {
                                if (input[35] <= 0.09246826171875) {
                                    if (input[43] <= 0.10162353515625) {
                                        memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var9, var18, 2, var8);
    double var19[2];
    if (input[66] <= 0.11627197265625) {
        if (input[273] <= 0.04874562285840511) {
            if (input[136] <= 0.13282610476016998) {
                if (input[157] <= 0.05025327019393444) {
                    if (input[228] <= 0.00020612986554624513) {
                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[352] <= 0.00005086246892460622) {
                        if (input[92] <= 0.07867431640625) {
                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[32] <= 0.12860107421875) {
                            if (input[356] <= 0.00030547882488463074) {
                                if (input[84] <= 0.05804443359375) {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[355] <= 0.0000516327145305695) {
                                        if (input[306] <= 0.038806430995464325) {
                                            if (input[221] <= 0.00021660816855728626) {
                                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[121] <= 0.00014664511400042102) {
                                            if (input[336] <= 0.023093354888260365) {
                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[257] <= 0.033906491473317146) {
                                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[101] <= 0.05206298828125) {
                                                if (input[258] <= 0.025437946431338787) {
                                                    if (input[335] <= 0.020973275415599346) {
                                                        if (input[79] <= 0.10986328125) {
                                                            if (input[224] <= 0.004921478859614581) {
                                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[333] <= 0.02568181697279215) {
                                                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[105] <= 0.0574951171875) {
                                                        if (input[180] <= 0.1677466556429863) {
                                                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[231] <= 0.004684704006649554) {
                                                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[56] <= 0.1253662109375) {
                                                    if (input[286] <= 0.05621200427412987) {
                                                        if (input[38] <= 0.12298583984375) {
                                                            if (input[74] <= 0.0587158203125) {
                                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[272] <= 0.013860910665243864) {
                                                                    if (input[229] <= 0.0001839801625465043) {
                                                                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[96] <= 0.09332275390625) {
                                                                        if (input[90] <= 0.0616455078125) {
                                                                            memcpy(var19, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[125] <= 0.00014220879529602826) {
                                                                                memcpy(var19, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[335] <= 0.006296236300840974) {
                                                                                    if (input[129] <= 0.038595154881477356) {
                                                                                        if (input[123] <= 0.00015667288971599191) {
                                                                                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var19, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[18] <= 0.11639404296875) {
                                                                                        if (input[108] <= 0.04351806640625) {
                                                                                            if (input[167] <= 0.2145790308713913) {
                                                                                                if (input[78] <= 0.07440185546875) {
                                                                                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[97] <= 0.08258056640625) {
                                                                                                if (input[301] <= 0.01880386844277382) {
                                                                                                    if (input[111] <= 0.2332763671875) {
                                                                                                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[278] <= 0.05283177085220814) {
                                                                                                        if (input[86] <= 0.0604248046875) {
                                                                                                            memcpy(var19, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[119] <= 0.00014557216491084546) {
                                                                                                                memcpy(var19, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[20] <= 0.11492919921875) {
                                                                                                                    if (input[132] <= 0.16392628848552704) {
                                                                                                                        if (input[39] <= 0.05841064453125) {
                                                                                                                            memcpy(var19, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[143] <= 0.1642329916357994) {
                                                                                                                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[65] <= 0.06231689453125) {
                                                                                                                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[243] <= 0.00005685763244400732) {
                                                                                                                                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var19, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var19, (double[]){0.875, 0.125}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[295] <= 0.03667460009455681) {
                                                                                                                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var19, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var19, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var19, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[239] <= 0.000057273608035757206) {
                                                                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var19, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[12] <= 0.069091796875) {
                                                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var19, (double[]){0.4444444444444444, 0.5555555555555556}, 2 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[347] <= 0.00031136897450778633) {
                    if (input[263] <= 0.029172057285904884) {
                        if (input[300] <= 0.027644267305731773) {
                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[101] <= 0.04833984375) {
                                memcpy(var19, (double[]){0.5, 0.5}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[269] <= 0.03309802897274494) {
                            if (input[258] <= 0.024287333711981773) {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[345] <= 0.0020670678350143135) {
                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[97] <= 0.07086181640625) {
                            if (input[268] <= 0.04716577008366585) {
                                if (input[324] <= 0.05956210009753704) {
                                    if (input[284] <= 0.054588038474321365) {
                                        if (input[4] <= 0.2613525390625) {
                                            if (input[223] <= 0.06114838644862175) {
                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[288] <= 0.05519160069525242) {
                                                if (input[76] <= 0.07086181640625) {
                                                    if (input[154] <= 0.23575010895729065) {
                                                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var19, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[4] <= 0.2735595703125) {
                                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[329] <= 0.048685185611248016) {
                if (input[342] <= 0.013052916154265404) {
                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[251] <= 0.02550050988793373) {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[200] <= 0.17580939829349518) {
                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[81] <= 0.11273193359375) {
            if (input[297] <= 0.0347903948277235) {
                if (input[106] <= 0.1136474609375) {
                    if (input[110] <= 0.14019775390625) {
                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                }
            } else {
                memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[9] <= 0.18255615234375) {
                if (input[62] <= 0.1151123046875) {
                    if (input[97] <= 0.0682373046875) {
                        memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var19, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[332] <= 0.00011278304009465501) {
                    memcpy(var19, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var19, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var8, var19, 2, var7);
    double var20[2];
    if (input[97] <= 0.07965087890625) {
        if (input[254] <= 0.03192032501101494) {
            if (input[241] <= 0.000050809880121960305) {
                if (input[298] <= 0.040965594351291656) {
                    if (input[107] <= 0.27679443359375) {
                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[42] <= 0.091796875) {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[263] <= 0.04304869845509529) {
                    if (input[84] <= 0.12945556640625) {
                        if (input[58] <= 0.061279296875) {
                            if (input[106] <= 0.2030029296875) {
                                if (input[314] <= 0.04685532674193382) {
                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                if (input[229] <= 0.0001560958262416534) {
                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[240] <= 0.00005031382534070872) {
                                memcpy(var20, (double[]){0.125, 0.875}, 2 * sizeof(double));
                            } else {
                                if (input[99] <= 0.0335693359375) {
                                    if (input[79] <= 0.06829833984375) {
                                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[96] <= 0.0919189453125) {
                                        if (input[12] <= 0.09234619140625) {
                                            if (input[33] <= 0.06072998046875) {
                                                if (input[5] <= 0.27960205078125) {
                                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[268] <= 0.04861163906753063) {
                                                    if (input[246] <= 0.0012970134848728776) {
                                                        if (input[148] <= 0.2818102091550827) {
                                                            if (input[273] <= 0.014596667140722275) {
                                                                if (input[54] <= 0.0914306640625) {
                                                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[209] <= 0.08486376330256462) {
                                                                    if (input[297] <= 0.025305908173322678) {
                                                                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[341] <= 0.000241975809331052) {
                                                                        if (input[181] <= 0.24225065112113953) {
                                                                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[62] <= 0.088134765625) {
                                                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[95] <= 0.09844970703125) {
                                                            if (input[267] <= 0.04578210227191448) {
                                                                if (input[137] <= 0.21924328804016113) {
                                                                    if (input[350] <= 0.0000533298916707281) {
                                                                        if (input[58] <= 0.08367919921875) {
                                                                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[65] <= 0.06005859375) {
                                                                            memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[50] <= 0.12774658203125) {
                                                                                if (input[30] <= 0.06097412109375) {
                                                                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[116] <= 0.24456787109375) {
                                                                                        if (input[110] <= 0.12725830078125) {
                                                                                            if (input[22] <= 0.0621337890625) {
                                                                                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[122] <= 0.00014697550068376586) {
                                                                                                    if (input[17] <= 0.0906982421875) {
                                                                                                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[314] <= 0.03590457700192928) {
                                                                                                if (input[49] <= 0.0711669921875) {
                                                                                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[212] <= 0.176663339138031) {
                                                                                                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[335] <= 0.03353516012430191) {
                                                                                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[242] <= 0.000050856013331213035) {
                                                                                            memcpy(var20, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[143] <= 0.25626738369464874) {
                                                                                                if (input[37] <= 0.12310791015625) {
                                                                                                    if (input[330] <= 0.024809188209474087) {
                                                                                                        if (input[221] <= 0.0002873038756661117) {
                                                                                                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[191] <= 0.14556485414505005) {
                                                                                                                memcpy(var20, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var20, (double[]){0.9, 0.1}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[123] <= 0.0001807649532565847) {
                                                                                                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[149] <= 0.21925951540470123) {
                                                                                                                if (input[96] <= 0.08056640625) {
                                                                                                                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var20, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var20, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[247] <= 0.008072423050180078) {
                                                                        memcpy(var20, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[99] <= 0.05560302734375) {
                                                                            memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var20, (double[]){0.125, 0.875}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[39] <= 0.1026611328125) {
                                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[226] <= 0.0015765388670843095) {
                                            memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[137] <= 0.1254681795835495) {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[214] <= 0.1771395280957222) {
                if (input[68] <= 0.0953369140625) {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= 0.2935791015625) {
                    if (input[8] <= 0.075927734375) {
                        memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[110] <= 0.2772216796875) {
            if (input[66] <= 0.07867431640625) {
                if (input[148] <= 0.15107862651348114) {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[147] <= 0.00016096908075269312) {
                    memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[64] <= 0.07781982421875) {
                        memcpy(var20, (double[]){0.6, 0.4}, 2 * sizeof(double));
                    } else {
                        if (input[149] <= 0.00015708713908679783) {
                            memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            if (input[247] <= 0.0002665307329152711) {
                                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[289] <= 0.00005396776941779535) {
                memcpy(var20, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var20, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var7, var20, 2, var6);
    double var21[2];
    if (input[45] <= 0.11981201171875) {
        if (input[315] <= 0.06114216707646847) {
            if (input[98] <= 0.07354736328125) {
                if (input[264] <= 0.04353814944624901) {
                    if (input[215] <= 0.032666537910699844) {
                        if (input[100] <= 0.1556396484375) {
                            if (input[334] <= 0.01455896720290184) {
                                if (input[106] <= 0.251953125) {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[96] <= 0.08380126953125) {
                            if (input[88] <= 0.0572509765625) {
                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[254] <= 0.033525675535202026) {
                                    if (input[32] <= 0.05877685546875) {
                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[122] <= 0.00014559562259819359) {
                                            if (input[88] <= 0.08343505859375) {
                                                if (input[356] <= 0.00004385468128020875) {
                                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[28] <= 0.055908203125) {
                                                memcpy(var21, (double[]){0.1111111111111111, 0.8888888888888888}, 2 * sizeof(double));
                                            } else {
                                                if (input[335] <= 0.006144318263977766) {
                                                    if (input[342] <= 0.00006932046744623221) {
                                                        memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[102] <= 0.03485107421875) {
                                                        if (input[262] <= 0.021294516511261463) {
                                                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[80] <= 0.05987548828125) {
                                                            if (input[313] <= 0.04738488793373108) {
                                                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[132] <= 0.08971701562404633) {
                                                                if (input[159] <= 0.0518026240170002) {
                                                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[291] <= 0.057573677971959114) {
                                                                        if (input[100] <= 0.03131103515625) {
                                                                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[146] <= 0.040252529084682465) {
                                                                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[354] <= 0.000051763283408945426) {
                                                                                    if (input[295] <= 0.028207512572407722) {
                                                                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[41] <= 0.1217041015625) {
                                                                                        if (input[36] <= 0.12396240234375) {
                                                                                            if (input[152] <= 0.344500333070755) {
                                                                                                if (input[267] <= 0.044108251109719276) {
                                                                                                    if (input[251] <= 0.021937844343483448) {
                                                                                                        if (input[26] <= 0.0596923828125) {
                                                                                                            if (input[95] <= 0.06024169921875) {
                                                                                                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[333] <= 0.02295841183513403) {
                                                                                                                if (input[240] <= 0.000051116074246237986) {
                                                                                                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[3] <= 0.24591064453125) {
                                                                                                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[90] <= 0.11175537109375) {
                                                                                                                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[52] <= 0.05670166015625) {
                                                                                                                    memcpy(var21, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[85] <= 0.06524658203125) {
                                                                                                                        if (input[134] <= 0.10197577625513077) {
                                                                                                                            if (input[303] <= 0.02458576299250126) {
                                                                                                                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[21] <= 0.0625) {
                                                                                                                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var21, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[82] <= 0.06085205078125) {
                                                                                                                            if (input[250] <= 0.016184403095394373) {
                                                                                                                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[311] <= 0.022788571193814278) {
                                                                                                                                if (input[194] <= 0.2061077132821083) {
                                                                                                                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[108] <= 0.04351806640625) {
                                                                                                                                    if (input[184] <= 0.10606556758284569) {
                                                                                                                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var21, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var21, (double[]){0.8571428571428571, 0.14285714285714285}, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var21, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var21, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[291] <= 0.03480665944516659) {
                                                                                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[219] <= 0.035789767280220985) {
                                                                    if (input[304] <= 0.03321831859648228) {
                                                                        memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[343] <= 0.0001555671260575764) {
                                                                        memcpy(var21, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[221] <= 0.01302101113833487) {
                                                                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[339] <= 0.028773861937224865) {
                                                                                if (input[222] <= 0.007813145872205496) {
                                                                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[26] <= 0.09466552734375) {
                                                                                        memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[35] <= 0.08160400390625) {
                                                                                            memcpy(var21, (double[]){0.4, 0.6}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[30] <= 0.11260986328125) {
                                                                                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var21, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[221] <= 0.019571215379983187) {
                                if (input[64] <= 0.08056640625) {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[74] <= 0.078369140625) {
                                        memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[133] <= 0.09934405609965324) {
                        memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[245] <= 0.00623161974363029) {
                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[77] <= 0.084716796875) {
                    if (input[112] <= 0.24578857421875) {
                        if (input[224] <= 0.013683297205716372) {
                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            if (input[249] <= 0.014033043757081032) {
                                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[47] <= 0.0919189453125) {
                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[11] <= 0.05841064453125) {
                        if (input[17] <= 0.09161376953125) {
                            if (input[162] <= 0.10261748731136322) {
                                memcpy(var21, (double[]){0.5, 0.5}, 2 * sizeof(double));
                            } else {
                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[192] <= 0.12442613765597343) {
                            if (input[255] <= 0.01844322681427002) {
                                memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[287] <= 0.02747682947665453) {
                                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        if (input[174] <= 0.00017483377450844273) {
            if (input[183] <= 0.00016481067723361775) {
                if (input[257] <= 0.00005514767690328881) {
                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[65] <= 0.10845947265625) {
                if (input[203] <= 0.13937262445688248) {
                    memcpy(var21, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[332] <= 0.00011019088560715318) {
                    memcpy(var21, (double[]){0.75, 0.25}, 2 * sizeof(double));
                } else {
                    memcpy(var21, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var6, var21, 2, var5);
    double var22[2];
    if (input[97] <= 0.07879638671875) {
        if (input[260] <= 0.03936864621937275) {
            if (input[257] <= 0.03699275851249695) {
                if (input[293] <= 0.014805636368691921) {
                    if (input[239] <= 0.000052555385991581716) {
                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[90] <= 0.05902099609375) {
                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        if (input[130] <= 0.09707587957382202) {
                            if (input[243] <= 0.00005079183756606653) {
                                if (input[306] <= 0.040309205651283264) {
                                    if (input[345] <= 0.0008993851006380282) {
                                        if (input[108] <= 0.2869873046875) {
                                            memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[51] <= 0.0870361328125) {
                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[36] <= 0.05615234375) {
                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[58] <= 0.05657958984375) {
                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[73] <= 0.1221923828125) {
                                            if (input[33] <= 0.06103515625) {
                                                if (input[261] <= 0.0273174736648798) {
                                                    if (input[198] <= 0.11206724867224693) {
                                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[341] <= 0.0025472491979599) {
                                                    if (input[223] <= 0.00027853361098095775) {
                                                        if (input[59] <= 0.09832763671875) {
                                                            if (input[343] <= 0.00009074918125406839) {
                                                                if (input[353] <= 0.00005839028744958341) {
                                                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[43] <= 0.0836181640625) {
                                                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var22, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[203] <= 0.12976868450641632) {
                                                                if (input[85] <= 0.1123046875) {
                                                                    if (input[230] <= 0.00017437477072235197) {
                                                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var22, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[88] <= 0.0819091796875) {
                                                            if (input[334] <= 0.026062526740133762) {
                                                                if (input[37] <= 0.06646728515625) {
                                                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[265] <= 0.0333233829587698) {
                                                                    if (input[11] <= 0.06231689453125) {
                                                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var22, (double[]){0.42857142857142855, 0.5714285714285714}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[103] <= 0.045166015625) {
                                                                memcpy(var22, (double[]){0.7142857142857143, 0.2857142857142857}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[343] <= 0.000227905620704405) {
                                                                    if (input[103] <= 0.185546875) {
                                                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[36] <= 0.12896728515625) {
                                                        if (input[342] <= 0.0008298938628286123) {
                                                            if (input[83] <= 0.07684326171875) {
                                                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[23] <= 0.128662109375) {
                                                                if (input[16] <= 0.113525390625) {
                                                                    if (input[49] <= 0.06024169921875) {
                                                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[43] <= 0.06146240234375) {
                                                                            memcpy(var22, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[110] <= 0.03790283203125) {
                                                                                if (input[50] <= 0.08551025390625) {
                                                                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[78] <= 0.0616455078125) {
                                                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[18] <= 0.11639404296875) {
                                                                                        if (input[28] <= 0.1292724609375) {
                                                                                            if (input[35] <= 0.11700439453125) {
                                                                                                if (input[164] <= 0.10378814861178398) {
                                                                                                    if (input[317] <= 0.03834769129753113) {
                                                                                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[157] <= 0.12774047255516052) {
                                                                                                        if (input[44] <= 0.07177734375) {
                                                                                                            memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[316] <= 0.03512365557253361) {
                                                                                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[136] <= 0.10439353063702583) {
                                                                                            memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[55] <= 0.11968994140625) {
                                                if (input[280] <= 0.03225588891655207) {
                                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[343] <= 0.004347543581388891) {
                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                if (input[1] <= 0.26898193359375) {
                                    memcpy(var22, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                } else {
                                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[201] <= 0.22195745259523392) {
                    memcpy(var22, (double[]){0.75, 0.25}, 2 * sizeof(double));
                } else {
                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[245] <= 0.0057107259053736925) {
                if (input[302] <= 0.04541512206196785) {
                    if (input[206] <= 0.1662420704960823) {
                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[12] <= 0.05218505859375) {
            if (input[130] <= 0.09025298245251179) {
                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[332] <= 0.00011351063585607335) {
                if (input[241] <= 0.00005358963426260743) {
                    memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[77] <= 0.07635498046875) {
                    if (input[177] <= 0.16489213705062866) {
                        memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[67] <= 0.10052490234375) {
                        if (input[200] <= 0.1491991952061653) {
                            if (input[88] <= 0.10101318359375) {
                                memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var22, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var22, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var5, var22, 2, var4);
    double var23[2];
    if (input[81] <= 0.11883544921875) {
        if (input[269] <= 0.045235563069581985) {
            if (input[336] <= 0.0008500360418111086) {
                if (input[53] <= 0.07763671875) {
                    if (input[148] <= 0.12220458313822746) {
                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[229] <= 0.000215211977774743) {
                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[258] <= 0.03807274252176285) {
                    if (input[102] <= 0.03485107421875) {
                        if (input[280] <= 0.028832843527197838) {
                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        }
                    } else {
                        if (input[91] <= 0.1226806640625) {
                            if (input[333] <= 0.0249301390722394) {
                                if (input[102] <= 0.14178466796875) {
                                    if (input[334] <= 0.02076653577387333) {
                                        if (input[225] <= 0.0002061180493910797) {
                                            if (input[342] <= 0.00007955628097988665) {
                                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                if (input[86] <= 0.1063232421875) {
                                                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var23, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[255] <= 0.019396464340388775) {
                                                if (input[57] <= 0.11578369140625) {
                                                    if (input[264] <= 0.02673706691712141) {
                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var23, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[116] <= 0.22540283203125) {
                                            memcpy(var23, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                        } else {
                                            if (input[96] <= 0.09527587890625) {
                                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[349] <= 0.00005104446427139919) {
                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[92] <= 0.06097412109375) {
                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[101] <= 0.04156494140625) {
                                    if (input[115] <= 0.25775146484375) {
                                        if (input[143] <= 0.10181496664881706) {
                                            if (input[306] <= 0.03159671276807785) {
                                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[227] <= 0.0012230342108523473) {
                                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var23, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[136] <= 0.12057334929704666) {
                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[280] <= 0.054975710809230804) {
                                        if (input[27] <= 0.0576171875) {
                                            memcpy(var23, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                        } else {
                                            if (input[30] <= 0.05950927734375) {
                                                memcpy(var23, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                            } else {
                                                if (input[35] <= 0.1175537109375) {
                                                    if (input[67] <= 0.12835693359375) {
                                                        if (input[125] <= 0.00014251253742258996) {
                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[97] <= 0.07867431640625) {
                                                                if (input[85] <= 0.05218505859375) {
                                                                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[265] <= 0.04950106889009476) {
                                                                        if (input[334] <= 0.014434043783694506) {
                                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[140] <= 0.15075162053108215) {
                                                                                if (input[94] <= 0.12408447265625) {
                                                                                    if (input[6] <= 0.26959228515625) {
                                                                                        if (input[99] <= 0.02764892578125) {
                                                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[78] <= 0.05902099609375) {
                                                                                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[157] <= 0.3014778643846512) {
                                                                                                    if (input[242] <= 0.000051281313062645495) {
                                                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[220] <= 0.15417135506868362) {
                                                                                                            if (input[101] <= 0.0477294921875) {
                                                                                                                if (input[56] <= 0.0865478515625) {
                                                                                                                    if (input[130] <= 0.049149658530950546) {
                                                                                                                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[109] <= 0.090576171875) {
                                                                                                                    if (input[203] <= 0.12837273627519608) {
                                                                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[131] <= 0.056315312162041664) {
                                                                                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[326] <= 0.022826350294053555) {
                                                                                                                        if (input[256] <= 0.013912072405219078) {
                                                                                                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var23, (double[]){0.8, 0.2}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var23, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[134] <= 0.11066765710711479) {
                                                                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[337] <= 0.01298790704458952) {
                                                                                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var23, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[337] <= 0.014313974417746067) {
                                                                                    if (input[165] <= 0.1338777095079422) {
                                                                                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[334] <= 0.024992356076836586) {
                                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[98] <= 0.07366943359375) {
                                                                                            if (input[28] <= 0.06158447265625) {
                                                                                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[2] <= 0.244873046875) {
                                                                                                    memcpy(var23, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[341] <= 0.004926519934087992) {
                                                                                                        if (input[90] <= 0.083251953125) {
                                                                                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[264] <= 0.03911312855780125) {
                                                                                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[100] <= 0.06500244140625) {
                                                                                                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[78] <= 0.08233642578125) {
                                                                    if (input[254] <= 0.021940570324659348) {
                                                                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[126] <= 0.0004728869826067239) {
                                                                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[98] <= 0.07281494140625) {
                                                        if (input[165] <= 0.17251327633857727) {
                                                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[126] <= 0.0035888288693968207) {
                                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                if (input[94] <= 0.10540771484375) {
                                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[9] <= 0.0614013671875) {
                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[126] <= 0.07118888199329376) {
                            memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[214] <= 0.18791359663009644) {
                if (input[228] <= 0.009285119827836752) {
                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[140] <= 0.11962073296308517) {
                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[211] <= 0.18891740590333939) {
                        memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[34] <= 0.10302734375) {
            if (input[106] <= 0.107177734375) {
                if (input[37] <= 0.125732421875) {
                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[126] <= 0.0002870782045647502) {
                memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[333] <= 0.00011655011257971637) {
                    memcpy(var23, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var23, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var4, var23, 2, var3);
    double var24[2];
    if (input[48] <= 0.1214599609375) {
        if (input[261] <= 0.040770458057522774) {
            if (input[33] <= 0.05950927734375) {
                if (input[139] <= 0.09267327561974525) {
                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[43] <= 0.12005615234375) {
                    if (input[78] <= 0.08465576171875) {
                        if (input[267] <= 0.0442668441683054) {
                            if (input[81] <= 0.09381103515625) {
                                if (input[32] <= 0.06134033203125) {
                                    if (input[35] <= 0.07122802734375) {
                                        if (input[97] <= 0.0594482421875) {
                                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[141] <= 0.10950129851698875) {
                                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[38] <= 0.1041259765625) {
                                        if (input[57] <= 0.092041015625) {
                                            if (input[88] <= 0.09466552734375) {
                                                if (input[99] <= 0.036376953125) {
                                                    if (input[266] <= 0.022365404292941093) {
                                                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[92] <= 0.09722900390625) {
                                                        if (input[108] <= 0.03790283203125) {
                                                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                        } else {
                                                            if (input[25] <= 0.09637451171875) {
                                                                if (input[97] <= 0.0396728515625) {
                                                                    if (input[218] <= 0.00048631821118760854) {
                                                                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[156] <= 0.04228881187736988) {
                                                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[79] <= 0.05596923828125) {
                                                                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[259] <= 0.041423551738262177) {
                                                                                if (input[48] <= 0.096435546875) {
                                                                                    if (input[77] <= 0.0615234375) {
                                                                                        if (input[293] <= 0.03390295058488846) {
                                                                                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[54] <= 0.05548095703125) {
                                                                                            memcpy(var24, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[58] <= 0.088623046875) {
                                                                                                if (input[89] <= 0.0546875) {
                                                                                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[121] <= 0.0001455205856473185) {
                                                                                                        if (input[291] <= 0.035215362906455994) {
                                                                                                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[36] <= 0.09576416015625) {
                                                                                                            if (input[65] <= 0.05755615234375) {
                                                                                                                memcpy(var24, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[23] <= 0.097412109375) {
                                                                                                                    if (input[70] <= 0.095703125) {
                                                                                                                        if (input[53] <= 0.06610107421875) {
                                                                                                                            if (input[18] <= 0.07403564453125) {
                                                                                                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[237] <= 0.00014612352970289066) {
                                                                                                                                    memcpy(var24, (double[]){0.6, 0.4}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[61] <= 0.06378173828125) {
                                                                                                                                if (input[81] <= 0.081298828125) {
                                                                                                                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var24, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var24, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var24, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[128] <= 0.054320696741342545) {
                                                                                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var24, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var24, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[247] <= 0.007724112132564187) {
                                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[236] <= 0.0001787380751920864) {
                                                if (input[258] <= 0.016431334428489208) {
                                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[88] <= 0.101318359375) {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[260] <= 0.038479287177324295) {
                                if (input[346] <= 0.004504771903157234) {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[95] <= 0.07501220703125) {
                                        memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                    } else {
                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[225] <= 0.0012960400781594217) {
                            if (input[346] <= 0.00006008113450661767) {
                                if (input[245] <= 0.00005130882163939532) {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                } else {
                                    if (input[199] <= 0.16690348088741302) {
                                        if (input[12] <= 0.07110595703125) {
                                            if (input[201] <= 0.2215155065059662) {
                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[288] <= 0.027757514268159866) {
                                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var24, (double[]){0.14285714285714285, 0.8571428571428571}, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[26] <= 0.103515625) {
                                    if (input[87] <= 0.07421875) {
                                        if (input[352] <= 0.000057538218243280426) {
                                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var24, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[224] <= 0.002425229176878929) {
                                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[170] <= 0.19430018216371536) {
                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[244] <= 0.00005313176370691508) {
                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    } else {
                                        if (input[191] <= 0.16574910283088684) {
                                            if (input[154] <= 0.0859331414103508) {
                                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var24, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[97] <= 0.0843505859375) {
                                if (input[308] <= 0.053361667320132256) {
                                    if (input[269] <= 0.04571937024593353) {
                                        if (input[307] <= 0.04786328598856926) {
                                            if (input[224] <= 0.004545458825305104) {
                                                memcpy(var24, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[125] <= 0.00015653543232474476) {
                                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[300] <= 0.033615611493587494) {
                        if (input[278] <= 0.023662950843572617) {
                            memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.22137451171875) {
                if (input[227] <= 0.012958513107150793) {
                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[207] <= 0.17390535026788712) {
                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[332] <= 0.00011116891982965171) {
            if (input[315] <= 0.00005318685361999087) {
                memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[12] <= 0.060302734375) {
                if (input[219] <= 0.03694950044155121) {
                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var24, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[50] <= 0.1016845703125) {
                    memcpy(var24, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                } else {
                    memcpy(var24, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var3, var24, 2, var2);
    double var25[2];
    if (input[131] <= 0.10359229892492294) {
        if (input[48] <= 0.12335205078125) {
            if (input[98] <= 0.0794677734375) {
                if (input[336] <= 0.00084131263429299) {
                    if (input[36] <= 0.0654296875) {
                        memcpy(var25, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                    } else {
                        memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[265] <= 0.04248221777379513) {
                        if (input[220] <= 0.019762028008699417) {
                            if (input[13] <= 0.06719970703125) {
                                if (input[106] <= 0.1807861328125) {
                                    if (input[336] <= 0.012295779306441545) {
                                        if (input[133] <= 0.02693316899240017) {
                                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[130] <= 0.06142037734389305) {
                                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var25, (double[]){0.16666666666666666, 0.8333333333333334}, 2 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[87] <= 0.09674072265625) {
                                        if (input[124] <= 0.00014355796156451106) {
                                            memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[108] <= 0.21563720703125) {
                                                if (input[314] <= 0.023259387351572514) {
                                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[176] <= 0.154471755027771) {
                                            if (input[83] <= 0.071533203125) {
                                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[340] <= 0.00007992417886271141) {
                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                } else {
                                    if (input[248] <= 0.009198328480124474) {
                                        if (input[11] <= 0.0457763671875) {
                                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        } else {
                                            if (input[108] <= 0.25958251953125) {
                                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                            } else {
                                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[78] <= 0.09649658203125) {
                                            memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                        } else {
                                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[289] <= 0.05862796492874622) {
                                if (input[263] <= 0.04496421292424202) {
                                    if (input[270] <= 0.050299808382987976) {
                                        if (input[98] <= 0.0736083984375) {
                                            if (input[259] <= 0.039047928526997566) {
                                                if (input[34] <= 0.11529541015625) {
                                                    if (input[99] <= 0.05841064453125) {
                                                        if (input[208] <= 0.34474410116672516) {
                                                            if (input[49] <= 0.0599365234375) {
                                                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                            } else {
                                                                if (input[24] <= 0.0628662109375) {
                                                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[131] <= 0.09948500245809555) {
                                                                        if (input[75] <= 0.06597900390625) {
                                                                            if (input[167] <= 0.1523638218641281) {
                                                                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[259] <= 0.021680893376469612) {
                                                                                if (input[349] <= 0.00007737814303254709) {
                                                                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var25, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[227] <= 0.021644252352416515) {
                                                                            memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var25, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[261] <= 0.02241838350892067) {
                                                            if (input[30] <= 0.07415771484375) {
                                                                if (input[314] <= 0.039261845871806145) {
                                                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[331] <= 0.03458759933710098) {
                                                        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                    } else {
                                                        memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var25, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[262] <= 0.029491975903511047) {
                                                if (input[235] <= 0.00015558557788608596) {
                                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                                } else {
                                                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var25, (double[]){0.2857142857142857, 0.7142857142857143}, 2 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var25, (double[]){0.6, 0.4}, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                                }
                            } else {
                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[257] <= 0.03525738976895809) {
                            if (input[230] <= 0.0008997237600851804) {
                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        } else {
                            if (input[150] <= 0.16286635398864746) {
                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[104] <= 0.20672607421875) {
                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[91] <= 0.0909423828125) {
                        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[32] <= 0.2645263671875) {
                if (input[93] <= 0.1055908203125) {
                    if (input[83] <= 0.1163330078125) {
                        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[85] <= 0.10577392578125) {
                        memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        if (input[87] <= 0.110595703125) {
                            memcpy(var25, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                        } else {
                            if (input[51] <= 0.2763671875) {
                                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                            } else {
                                memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[294] <= 0.00005358839007385541) {
                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[144] <= 0.17476022243499756) {
            if (input[340] <= 0.0037925189826637506) {
                memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[71] <= 0.11614990234375) {
                    if (input[333] <= 0.04608980007469654) {
                        if (input[347] <= 0.00901062274351716) {
                            memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                        } else {
                            memcpy(var25, (double[]){0.5, 0.5}, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[177] <= 0.1790713295340538) {
                if (input[125] <= 0.00038902487722225487) {
                    memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[133] <= 0.08689538016915321) {
                    memcpy(var25, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 0.075927734375) {
                        memcpy(var25, (double[]){0.5, 0.5}, 2 * sizeof(double));
                    } else {
                        memcpy(var25, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var2, var25, 2, var1);
    mul_vector_number(var1, 0.07692307692307693, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}
