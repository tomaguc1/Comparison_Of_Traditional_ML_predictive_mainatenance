#include <math.h>
#include <string.h>
double sigmoid(double x) {
    if (x < 0.0) {
        double z = exp(x);
        return z / (1.0 + z);
    }
    return 1.0 / (1.0 + exp(-x));
}
void score(double * input, double * output) {
    double var0;
    if (input[279] >= 0.004937526) {
        if (input[179] >= 0.01709258) {
            var0 = 0.58431375;
        } else {
            var0 = -0.3818182;
        }
    } else {
        if (input[102] >= 0.15563965) {
            if (input[312] >= 0.000017532911) {
                if (input[101] >= 0.15905762) {
                    if (input[3] >= 0.32751465) {
                        if (input[103] >= 0.1381836) {
                            var0 = -0.59621054;
                        } else {
                            var0 = -0.15;
                        }
                    } else {
                        var0 = -0.15;
                    }
                } else {
                    if (input[246] >= 0.00026465784) {
                        var0 = 0.3;
                    } else {
                        var0 = -0.3818182;
                    }
                }
            } else {
                var0 = 0.40000004;
            }
        } else {
            if (input[181] >= 0.014765969) {
                var0 = 0.504;
            } else {
                var0 = -0.20000002;
            }
        }
    }
    double var1;
    if (input[312] >= 0.005174461) {
        if (input[149] >= 0.016367413) {
            var1 = 0.45443973;
        } else {
            var1 = -0.14859113;
        }
    } else {
        if (input[102] >= 0.15563965) {
            if (input[312] >= 0.000017532911) {
                if (input[101] >= 0.15905762) {
                    if (input[94] >= 0.25073242) {
                        var1 = -0.46048465;
                    } else {
                        var1 = -0.023587286;
                    }
                } else {
                    if (input[14] >= 0.28137207) {
                        var1 = 0.28724235;
                    } else {
                        var1 = -0.34932134;
                    }
                }
            } else {
                var1 = 0.31751212;
            }
        } else {
            if (input[181] >= 0.014765969) {
                var1 = 0.40857583;
            } else {
                var1 = -0.16770285;
            }
        }
    }
    double var2;
    if (input[279] >= 0.004962978) {
        if (input[178] >= 0.017247539) {
            var2 = 0.39518127;
        } else {
            var2 = -0.23950797;
        }
    } else {
        if (input[102] >= 0.15270996) {
            if (input[312] >= 0.000017532911) {
                if (input[101] >= 0.15905762) {
                    if (input[40] >= 0.38305664) {
                        if (input[75] >= 0.3548584) {
                            var2 = -0.31709018;
                        } else {
                            var2 = 0.20739773;
                        }
                    } else {
                        var2 = -0.40304974;
                    }
                } else {
                    if (input[14] >= 0.28137207) {
                        var2 = 0.27928972;
                    } else {
                        var2 = -0.24400839;
                    }
                }
            } else {
                var2 = 0.26369894;
            }
        } else {
            if (input[356] >= 0.0000145850645) {
                var2 = 0.35290763;
            } else {
                var2 = -0.0945718;
            }
        }
    }
    double var3;
    if (input[299] >= 0.0051646223) {
        if (input[102] >= 0.22595215) {
            var3 = 0.02947524;
        } else {
            var3 = 0.35855207;
        }
    } else {
        if (input[102] >= 0.15270996) {
            if (input[40] >= 0.38305664) {
                if (input[126] >= 0.00012367812) {
                    if (input[53] >= 0.36938477) {
                        var3 = 0.3739154;
                    } else {
                        var3 = -0.06422739;
                    }
                } else {
                    var3 = -0.27543566;
                }
            } else {
                if (input[304] >= 0.0051299846) {
                    var3 = -0.010779226;
                } else {
                    if (input[101] >= 0.15905762) {
                        var3 = -0.36803508;
                    } else {
                        if (input[15] >= 0.27685547) {
                            var3 = 0.12688155;
                        } else {
                            var3 = -0.25477228;
                        }
                    }
                }
            }
        } else {
            if (input[112] >= 0.41467285) {
                var3 = -0.10991453;
            } else {
                var3 = 0.32136118;
            }
        }
    }
    double var4;
    if (input[279] >= 0.004937526) {
        if (input[179] >= 0.01709258) {
            var4 = 0.33596343;
        } else {
            var4 = -0.19004744;
        }
    } else {
        if (input[102] >= 0.15563965) {
            if (input[216] >= 0.00008484261) {
                if (input[101] >= 0.15905762) {
                    if (input[40] >= 0.38305664) {
                        if (input[14] >= 0.31054688) {
                            var4 = -0.22808145;
                        } else {
                            var4 = 0.07089838;
                        }
                    } else {
                        var4 = -0.34683895;
                    }
                } else {
                    if (input[347] >= 0.000020244403) {
                        var4 = 0.21718083;
                    } else {
                        var4 = -0.20638765;
                    }
                }
            } else {
                if (input[126] >= 0.000115220566) {
                    var4 = 0.2885755;
                } else {
                    var4 = -0.18398894;
                }
            }
        } else {
            if (input[168] >= 0.01453886) {
                var4 = 0.28480068;
            } else {
                var4 = -0.13697533;
            }
        }
    }
    double var5;
    if (input[305] >= 0.005098546) {
        if (input[199] >= 0.019672053) {
            var5 = 0.31667542;
        } else {
            var5 = -0.04464224;
        }
    } else {
        if (input[103] >= 0.13293457) {
            if (input[215] >= 0.00008614925) {
                if (input[101] >= 0.13537598) {
                    if (input[229] >= 0.00006574862) {
                        if (input[282] >= 0.005038424) {
                            var5 = -0.07392592;
                        } else {
                            var5 = -0.33118087;
                        }
                    } else {
                        var5 = -0.04912999;
                    }
                } else {
                    if (input[8] >= 0.36328125) {
                        var5 = -0.11671833;
                    } else {
                        var5 = 0.22980975;
                    }
                }
            } else {
                if (input[126] >= 0.00023260988) {
                    var5 = 0.23540954;
                } else {
                    var5 = -0.051128346;
                }
            }
        } else {
            var5 = 0.26432982;
        }
    }
    double var6;
    if (input[312] >= 0.005174461) {
        if (input[173] >= 0.02024363) {
            var6 = 0.30100283;
        } else {
            var6 = 0.04573095;
        }
    } else {
        if (input[103] >= 0.13293457) {
            if (input[216] >= 0.00008484261) {
                if (input[101] >= 0.12902832) {
                    if (input[354] >= 0.000021247319) {
                        var6 = -0.0056152716;
                    } else {
                        if (input[229] >= 0.00006574862) {
                            var6 = -0.32283726;
                        } else {
                            var6 = -0.04123141;
                        }
                    }
                } else {
                    var6 = 0.10834058;
                }
            } else {
                if (input[312] >= 0.000017532911) {
                    var6 = -0.09492424;
                } else {
                    var6 = 0.2319246;
                }
            }
        } else {
            var6 = 0.25053856;
        }
    }
    double var7;
    if (input[313] >= 0.0051045874) {
        if (input[280] >= 0.0049237316) {
            var7 = 0.290075;
        } else {
            var7 = -0.045422576;
        }
    } else {
        if (input[222] >= 0.0009882676) {
            var7 = -0.31193474;
        } else {
            if (input[246] >= 0.000024628771) {
                if (input[72] >= 0.33911133) {
                    var7 = 0.31483102;
                } else {
                    if (input[334] >= 0.002808569) {
                        var7 = 0.17925586;
                    } else {
                        var7 = -0.24757881;
                    }
                }
            } else {
                var7 = -0.28546542;
            }
        }
    }
    double var8;
    if (input[279] >= 0.004937526) {
        if (input[333] >= 0.0043422384) {
            var8 = 0.27547488;
        } else {
            var8 = 0.021541476;
        }
    } else {
        if (input[341] >= 0.00036442658) {
            var8 = -0.30505192;
        } else {
            if (input[246] >= 0.000024628771) {
                if (input[72] >= 0.33911133) {
                    var8 = 0.288455;
                } else {
                    if (input[141] >= 0.0137365945) {
                        var8 = 0.15616477;
                    } else {
                        var8 = -0.22339678;
                    }
                }
            } else {
                var8 = -0.2694244;
            }
        }
    }
    double var9;
    if (input[269] >= 0.004858205) {
        var9 = 0.2543915;
    } else {
        if (input[222] >= 0.0009882676) {
            var9 = -0.29445305;
        } else {
            if (input[246] >= 0.000024628771) {
                if (input[72] >= 0.33911133) {
                    var9 = 0.26329803;
                } else {
                    if (input[334] >= 0.0027251116) {
                        var9 = 0.14849308;
                    } else {
                        var9 = -0.20674115;
                    }
                }
            } else {
                var9 = -0.24817279;
            }
        }
    }
    double var10;
    if (input[283] >= 0.0049350164) {
        if (input[204] >= 0.020588944) {
            var10 = 0.25217512;
        } else {
            var10 = 0.01822224;
        }
    } else {
        if (input[223] >= 0.00028411817) {
            var10 = -0.29086983;
        } else {
            if (input[246] >= 0.000024628771) {
                if (input[96] >= 0.21069336) {
                    var10 = 0.22851692;
                } else {
                    var10 = -0.09836073;
                }
            } else {
                var10 = -0.23792936;
            }
        }
    }
    double var11;
    if (input[305] >= 0.005098546) {
        var11 = 0.22573584;
    } else {
        if (input[222] >= 0.0009882676) {
            var11 = -0.28284153;
        } else {
            if (input[195] >= 0.014106156) {
                var11 = 0.20019627;
            } else {
                if (input[8] >= 0.36340332) {
                    var11 = -0.2261134;
                } else {
                    var11 = 0.06722559;
                }
            }
        }
    }
    double var12;
    if (input[326] >= 0.0050739236) {
        var12 = 0.2068477;
    } else {
        if (input[222] >= 0.0009882676) {
            var12 = -0.28029585;
        } else {
            if (input[246] >= 0.000024628771) {
                if (input[72] >= 0.33911133) {
                    var12 = 0.21769118;
                } else {
                    var12 = -0.0810241;
                }
            } else {
                var12 = -0.208104;
            }
        }
    }
    double var13;
    if (input[169] >= 0.021053571) {
        var13 = 0.1962782;
    } else {
        if (input[40] >= 0.38305664) {
            var13 = 0.07352158;
        } else {
            if (input[101] >= 0.16760254) {
                var13 = -0.2637718;
            } else {
                var13 = -0.009789099;
            }
        }
    }
    double var14;
    if (input[317] >= 0.0050121546) {
        var14 = 0.18303636;
    } else {
        if (input[222] >= 0.0009882676) {
            var14 = -0.26269713;
        } else {
            if (input[195] >= 0.014106156) {
                var14 = 0.1635074;
            } else {
                if (input[86] >= 0.3461914) {
                    var14 = 0.055133335;
                } else {
                    var14 = -0.20684423;
                }
            }
        }
    }
    double var15;
    var15 = sigmoid(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14);
    memcpy(output, (double[]){1.0 - var15, var15}, 2 * sizeof(double));
}
