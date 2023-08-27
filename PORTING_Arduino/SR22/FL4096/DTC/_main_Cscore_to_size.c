#include <stdio.h>
#include <math.h>
#include <string.h>

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
void score(double * input, double * output) {
    const double array_one[] = {1.0, 0.0};
    const double array_two[] = {0.0, 1.0};
    double var0[2];
    if (input[97] <= 0.1424560546875) {
        if (input[267] <= 0.04421727731823921) {
            if (input[101] <= 0.0499267578125) {
                if (input[344] <= 0.0000716952454240527) {
                    if (input[36] <= 0.1500244140625) {
                        memcpy(var0, array_one, 2 * sizeof(double));
                    } else {
                        memcpy(var0, array_two, 2 * sizeof(double));
                    }
                } else {
                    if (input[246] <= 0.00005300892735249363) {
                        memcpy(var0, array_one, 2 * sizeof(double));
                    } else {
                        memcpy(var0, array_two, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[334] <= 0.011095253750681877) {
                    if (input[220] <= 0.0002384303297731094) {
                        if (input[279] <= 0.011576831340789795) {
                            memcpy(var0, array_two, 2 * sizeof(double));
                        } else {
                            memcpy(var0, array_one, 2 * sizeof(double));
                        }
                    } else {
                        memcpy(var0, array_two, 2 * sizeof(double));
                    }
                } else {
                    if (input[86] <= 0.215576171875) {
                        if (input[258] <= 0.03820490650832653) {
                            if (input[125] <= 0.00011912669287994504) {
                                if (input[290] <= 0.04030407592654228) {
                                    memcpy(var0, array_two, 2 * sizeof(double));
                                } else {
                                    memcpy(var0, array_one, 2 * sizeof(double));
                                }
                            } else {
                                if (input[90] <= 0.1072998046875) {
                                    if (input[318] <= 0.046797044575214386) {
                                        memcpy(var0, array_two, 2 * sizeof(double));
                                    } else {
                                        memcpy(var0, array_one, 2 * sizeof(double));
                                    }
                                } else {
                                    if (input[103] <= 0.05224609375) {
                                        if (input[116] <= 0.162109375) {
                                            if (input[91] <= 0.133056640625) {
                                                memcpy(var0, array_one, 2 * sizeof(double));
                                            } else {
                                                memcpy(var0, array_two, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, array_one, 2 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= 0.192626953125) {
                                            if (input[99] <= 0.1396484375) {
                                                if (input[64] <= 0.1068115234375) {
                                                    memcpy(var0, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                                } else {
                                                    if (input[235] <= 0.00011998652189504355) {
                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                    } else {
                                                        if (input[84] <= 0.1036376953125) {
                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                        } else {
                                                            if (input[96] <= 0.16650390625) {
                                                                if (input[123] <= 0.00011715289656422101) {
                                                                    memcpy(var0, (double[]){0.25, 0.75}, 2 * sizeof(double));
                                                                } else {
                                                                    if (input[272] <= 0.052099745720624924) {
                                                                        if (input[102] <= 0.0902099609375) {
                                                                            if (input[253] <= 0.01938903983682394) {
                                                                                if (input[334] <= 0.016840693540871143) {
                                                                                    if (input[111] <= 0.156982421875) {
                                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var0, array_one, 2 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[11] <= 0.111083984375) {
                                                                                        if (input[220] <= 0.10936177894473076) {
                                                                                            if (input[136] <= 0.14297368377447128) {
                                                                                                memcpy(var0, array_one, 2 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var0, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[165] <= 0.13448546826839447) {
                                                                                            memcpy(var0, array_two, 2 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[333] <= 0.04278606362640858) {
                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[49] <= 0.107666015625) {
                                                                                memcpy(var0, (double[]){0.3333333333333333, 0.6666666666666666}, 2 * sizeof(double));
                                                                            } else {
                                                                                if (input[80] <= 0.1080322265625) {
                                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                                } else {
                                                                                    if (input[84] <= 0.2216796875) {
                                                                                        if (input[92] <= 0.2286376953125) {
                                                                                            if (input[39] <= 0.102783203125) {
                                                                                                memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[86] <= 0.1055908203125) {
                                                                                                    memcpy(var0, (double[]){0.5, 0.5}, 2 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[130] <= 0.09910671412944794) {
                                                                                                        if (input[60] <= 0.1103515625) {
                                                                                                            memcpy(var0, (double[]){0.6666666666666666, 0.3333333333333333}, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[42] <= 0.2135009765625) {
                                                                                                                if (input[18] <= 0.2037353515625) {
                                                                                                                    memcpy(var0, (double[]){0.9975077881619938, 0.0024922118380062306}, 2 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var0, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var0, (double[]){0.75, 0.25}, 2 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[338] <= 0.03018835559487343) {
                                                                                                            memcpy(var0, array_one, 2 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var0, array_two, 2 * sizeof(double));
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
                                                                        }
                                                                    } else {
                                                                        memcpy(var0, array_two, 2 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[123] <= 0.00013733752712141722) {
                                                                    memcpy(var0, array_two, 2 * sizeof(double));
                                                                } else {
                                                                    memcpy(var0, array_one, 2 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var0, (double[]){0.2, 0.8}, 2 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var0, array_two, 2 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[144] <= 0.14146386086940765) {
                                memcpy(var0, array_one, 2 * sizeof(double));
                            } else {
                                memcpy(var0, array_two, 2 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[71] <= 0.1708984375) {
                            memcpy(var0, array_one, 2 * sizeof(double));
                        } else {
                            memcpy(var0, array_two, 2 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[245] <= 0.006366476882249117) {
                if (input[192] <= 0.15164760500192642) {
                    memcpy(var0, array_one, 2 * sizeof(double));
                } else {
                    if (input[126] <= 0.00013192524784244597) {
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
        if (input[126] <= 0.00017754951113602147) {
            if (input[110] <= 0.0989990234375) {
                memcpy(var0, array_two, 2 * sizeof(double));
            } else {
                memcpy(var0, array_one, 2 * sizeof(double));
            }
        } else {
            if (input[333] <= 0.00011681674732244574) {
                memcpy(var0, array_one, 2 * sizeof(double));
            } else {
                if (input[75] <= 0.1412353515625) {
                    if (input[145] <= 0.1257558912038803) {
                        memcpy(var0, array_one, 2 * sizeof(double));
                    } else {
                        memcpy(var0, array_two, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var0, array_two, 2 * sizeof(double));
                }
            }
        }
    }
    memcpy(output, var0, 2 * sizeof(double));
}

