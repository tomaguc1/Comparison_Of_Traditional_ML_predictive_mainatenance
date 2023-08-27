#include <stdio.h>
#include <math.h>
#include <string.h>

void score(double * input, double * output);


int main() {
    // Main Function Body
    double inputArr[357];
    double outputScore[2];

    double result;
    score(inputArr, outputScore);
    // result = sigmoid(outputScore[1]);
    return 0;
}

void score(double * input, double * output) {
                                                                        
    const double array_one[] = {1.0, 0.0};
    const double array_two[] = {0.0, 1.0};

    double var0[2];
    if (input[97] <= 0.07879638671875) {
        if (input[267] <= 0.04425356909632683) {
            if (input[334] <= 0.011104937177151442) {
                if (input[220] <= 0.0002622887404868379) {
                    if (input[186] <= 0.042496442794799805) {
                        memcpy(var0, array_two, 2 * sizeof(double));
                    } else {
                        memcpy(var0, array_one, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, array_two, 2 * sizeof(double));
                }
            } else {
                if (input[100] <= 0.04351806640625) {
                    if (input[132] <= 0.06423287838697433) {
                        if (input[218] <= 0.016547433100640774) {
                            if (input[29] <= 0.0703125) {
                                memcpy(var0, array_one, 2 * sizeof(double));
                            } else {
                                memcpy(var0, array_two, 2 * sizeof(double));
                            }
                        } else {
                            if (input[79] <= 0.12823486328125) {
                                memcpy(var0, array_one, 2 * sizeof(double));
                            } else {
                                memcpy(var0, array_two, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[114] <= 0.27447509765625) {
                            if (input[118] <= 0.20892333984375) {
                                memcpy(var0, array_two, 2 * sizeof(double));
                            } else {
                                memcpy(var0, array_one, 2 * sizeof(double));
                            }
                        } else {
                            memcpy(var0, array_one, 2 * sizeof(double));
                        }
                    }
                } else {
                    if (input[244] <= 0.000050581240429892205) {
                        if (input[333] <= 0.034843407571315765) {
                            memcpy(var0, array_two, 2 * sizeof(double));
                        } else {
                            memcpy(var0, array_one, 2 * sizeof(double));
                        }
                    } else {
                        if (input[258] <= 0.038237547501921654) {
                            if (input[16] <= 0.11260986328125) {
                                if (input[30] <= 0.05535888671875) {
                                    memcpy(var0, array_two, 2 * sizeof(double));
                                } else {
                                    if (input[272] <= 0.05212351866066456) {
                                        if (input[84] <= 0.0589599609375) {
                                            if (input[141] <= 0.11114458739757538) {
                                                memcpy(var0, array_one, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, array_two, 2 * sizeof(double));
                                            }
                                        } else {
                                            if (input[96] <= 0.08099365234375) {
                                                if (input[63] <= 0.1318359375) {
                                                    if (input[77] <= 0.05548095703125) {
                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                    } else {
                                                        if (input[93] <= 0.12750244140625) {
                                                            if (input[259] <= 0.04079416021704674) {
                                                                if (input[23] <= 0.13128662109375) {
                                                                    if (input[90] <= 0.05853271484375) {
                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                    } else {
                                                                        if (input[97] <= 0.03179931640625) {
                                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                                        } else {
                                                                            if (input[212] <= 0.41215990483760834) {
                                                                                if (input[60] <= 0.12762451171875) {
                                                                                    if (input[58] <= 0.0540771484375) {
                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[120] <= 0.0001497553093940951) {
                                                                                            if (input[95] <= 0.08587646484375) {
                                                                                                if (input[237] <= 0.00014227490464691073) {
                                                                                                    if (input[42] <= 0.1142578125) {
                                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[34] <= 0.0606689453125) {
                                                                                                if (input[20] <= 0.06646728515625) {
                                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[286] <= 0.05621200427412987) {
                                                                                                    if (input[290] <= 0.05783199332654476) {
                                                                                                        if (input[352] <= 0.000050648386604734696) {
                                                                                                            if (input[60] <= 0.076416015625) {
                                                                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[147] <= 0.35769225656986237) {
                                                                                                                if (input[65] <= 0.05999755859375) {
                                                                                                                    if (input[12] <= 0.060302734375) {
                                                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[95] <= 0.05816650390625) {
                                                                                                                        if (input[156] <= 0.14167168736457825) {
                                                                                                                            if (input[123] <= 0.0001657447501202114) {
                                                                                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[130] <= 0.09960705786943436) {
                                                                                                                            if (input[108] <= 0.04351806640625) {
                                                                                                                                if (input[33] <= 0.0777587890625) {
                                                                                                                                    if (input[317] <= 0.043321069329977036) {
                                                                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[265] <= 0.04303008317947388) {
                                                                                                                                    if (input[257] <= 0.03633604943752289) {
                                                                                                                                        if (input[333] <= 0.01992766372859478) {
                                                                                                                                            if (input[221] <= 0.0002768682170426473) {
                                                                                                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                if (input[99] <= 0.0501708984375) {
                                                                                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[233] <= 0.00014889166777720675) {
                                                                                                                                                if (input[153] <= 0.23309287428855896) {
                                                                                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[37] <= 0.12335205078125) {
                                                                                                                                                    if (input[158] <= 0.3537885993719101) {
                                                                                                                                                        if (input[18] <= 0.11676025390625) {
                                                                                                                                                            if (input[43] <= 0.06109619140625) {
                                                                                                                                                                if (input[12] <= 0.06298828125) {
                                                                                                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                                } else {
                                                                                                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                if (input[111] <= 0.03399658203125) {
                                                                                                                                                                    if (input[137] <= 0.10810171440243721) {
                                                                                                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                                    } else {
                                                                                                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    if (input[71] <= 0.062255859375) {
                                                                                                                                                                        if (input[86] <= 0.08282470703125) {
                                                                                                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        if (input[47] <= 0.06280517578125) {
                                                                                                                                                                            if (input[23] <= 0.08526611328125) {
                                                                                                                                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                                            } else {
                                                                                                                                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            if (input[299] <= 0.03572288528084755) {
                                                                                                                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                            } else {
                                                                                                                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        if (input[257] <= 0.027349693700671196) {
                                                                                                                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    if (input[314] <= 0.03512282110750675) {
                                                                                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[126] <= 0.033808114007115364) {
                                                                                                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[350] <= 0.00009750517710926943) {
                                                                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[338] <= 0.0302051343023777) {
                                                                                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[340] <= 0.012023810297250748) {
                                                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[89] <= 0.084228515625) {
                                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[149] <= 0.21742059290409088) {
                                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[52] <= 0.07318115234375) {
                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[356] <= 0.00004552119207801297) {
                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                            } else {
                                                                memcpy(var0, array_two, 2 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                }
                                            } else {
                                                if (input[126] <= 0.00023373491421807557) {
                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                } else {
                                                    if (input[137] <= 0.08236615732312202) {
                                                        if (input[183] <= 0.0828833170235157) {
                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                        } else {
                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var0, array_two, 2 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[81] <= 0.112060546875) {
                                    if (input[195] <= 0.1434517651796341) {
                                        memcpy(var0, array_one, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, array_two, 2 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var0, array_two, 2 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[163] <= 0.16179323196411133) {
                                memcpy(var0, array_one, 2 * sizeof(double));
                            } else {
                                memcpy(var0, array_two, 2 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[245] <= 0.00636901194229722) {
                if (input[201] <= 0.15905826538801193) {
                    memcpy(var0, array_one, 2 * sizeof(double));
                } else {
                    if (input[138] <= 0.12788216024637222) {
                        memcpy(var0, array_one, 2 * sizeof(double));
                    } else {
                        memcpy(var0, array_two, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var0, array_one, 2 * sizeof(double));
            }
        }
    } else {
        if (input[9] <= 0.16943359375) {
            if (input[11] <= 0.0517578125) {
                if (input[49] <= 0.08447265625) {
                    memcpy(var0, array_one, 2 * sizeof(double));
                } else {
                    memcpy(var0, array_two, 2 * sizeof(double));
                }
            } else {
                if (input[10] <= 0.04522705078125) {
                    if (input[86] <= 0.1064453125) {
                        memcpy(var0, array_two, 2 * sizeof(double));
                    } else {
                        memcpy(var0, array_one, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, array_two, 2 * sizeof(double));
                }
            }
        } else {
            if (input[239] <= 0.00005340836287359707) {
                memcpy(var0, array_two, 2 * sizeof(double));
            } else {
                if (input[139] <= 0.00015156671724980697) {
                    memcpy(var0, array_two, 2 * sizeof(double));
                } else {
                    memcpy(var0, array_one, 2 * sizeof(double));
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}

