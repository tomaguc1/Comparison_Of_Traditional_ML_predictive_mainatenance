#include <stdio.h>
#include <math.h>
#include <string.h>

void score(double * input, double * output);
double sigmoid(double x);

int main() {
    // Main Function Body
    double inputArr[357];
    double outputScore[2];

    double result;
    score(inputArr, outputScore);
    // result = sigmoid(outputScore[1]);
    return 0;
}

double sigmoid(double x) {
    if (x < 0.0) {
        double z = exp(x);
        return z / (1.0 + z);
    }
    return 1.0 / (1.0 + exp(-x));
}
void score(double * input, double * output) {
    double var0;
    if (input[97] >= 0.07879639) {
        if (input[9] >= 0.1694336) {
            if (input[239] >= 0.000053408363) {
                var0 = -0.48387098;
            } else {
                var0 = 0.36;
            }
        } else {
            if (input[11] >= 0.051757812) {
                if (input[1] >= 0.29077148) {
                    var0 = 0.15;
                } else {
                    var0 = 0.59351355;
                }
            } else {
                if (input[48] >= 0.08001709) {
                    var0 = 0.42857146;
                } else {
                    var0 = -0.40000004;
                }
            }
        }
    } else {
        if (input[267] >= 0.04425357) {
            if (input[245] >= 0.006369012) {
                var0 = -0.41538465;
            } else {
                if (input[133] >= 0.09573496) {
                    var0 = 0.5860465;
                } else {
                    var0 = -0.06666667;
                }
            }
        } else {
            if (input[239] >= 0.000051260173) {
                if (input[70] >= 0.12359619) {
                    if (input[63] >= 0.10852051) {
                        var0 = 0.45000002;
                    } else {
                        var0 = -0.33333337;
                    }
                } else {
                    if (input[100] >= 0.039611816) {
                        if (input[68] >= 0.05908203) {
                            if (input[258] >= 0.03927146) {
                                var0 = 0.3818182;
                            } else {
                                if (input[30] >= 0.060302734) {
                                    if (input[96] >= 0.09564209) {
                                        var0 = 0.16363637;
                                    } else {
                                        if (input[58] >= 0.058410645) {
                                            if (input[259] >= 0.0399937) {
                                                var0 = 0.06666667;
                                            } else {
                                                if (input[355] >= 0.000050428163) {
                                                    if (input[96] >= 0.08099365) {
                                                        if (input[9] >= 0.1494751) {
                                                            if (input[101] >= 0.048950195) {
                                                                var0 = -0.57446814;
                                                            } else {
                                                                var0 = -0.06666667;
                                                            }
                                                        } else {
                                                            if (input[33] >= 0.08062744) {
                                                                var0 = 0.38823533;
                                                            } else {
                                                                var0 = -0.24000001;
                                                            }
                                                        }
                                                    } else {
                                                        if (input[97] >= 0.03503418) {
                                                            if (input[33] >= 0.1227417) {
                                                                if (input[2] >= 0.26879883) {
                                                                    var0 = 0.15;
                                                                } else {
                                                                    var0 = -0.36;
                                                                }
                                                            } else {
                                                                if (input[278] >= 0.053648423) {
                                                                    if (input[0] >= 0.13494873) {
                                                                        var0 = -0.36;
                                                                    } else {
                                                                        var0 = 0.15;
                                                                    }
                                                                } else {
                                                                    if (input[108] >= 0.037475586) {
                                                                        if (input[33] >= 0.060546875) {
                                                                            if (input[65] >= 0.05999756) {
                                                                                if (input[82] >= 0.06085205) {
                                                                                    var0 = -0.58764607;
                                                                                } else {
                                                                                    var0 = -0.23076925;
                                                                                }
                                                                            } else {
                                                                                if (input[0] >= 0.13531494) {
                                                                                    var0 = -0.33333337;
                                                                                } else {
                                                                                    var0 = 0.0;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[2] >= 0.2734375) {
                                                                                var0 = -0.33333337;
                                                                            } else {
                                                                                var0 = 0.0;
                                                                            }
                                                                        }
                                                                    } else {
                                                                        var0 = -0.16363637;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            var0 = 0.0;
                                                        }
                                                    }
                                                } else {
                                                    var0 = 0.0;
                                                }
                                            }
                                        } else {
                                            var0 = 0.15;
                                        }
                                    }
                                } else {
                                    if (input[105] >= 0.1864624) {
                                        var0 = -0.41538465;
                                    } else {
                                        var0 = 0.40000004;
                                    }
                                }
                            }
                        } else {
                            if (input[0] >= 0.13720703) {
                                var0 = -0.15;
                            } else {
                                var0 = 0.42857146;
                            }
                        }
                    } else {
                        if (input[132] >= 0.063434854) {
                            var0 = 0.51428574;
                        } else {
                            if (input[218] >= 0.016790316) {
                                var0 = -0.54;
                            } else {
                                var0 = 0.33333337;
                            }
                        }
                    }
                }
            } else {
                if (input[334] >= 0.032615867) {
                    if (input[3] >= 0.27148438) {
                        var0 = -0.56666666;
                    } else {
                        var0 = -0.15;
                    }
                } else {
                    if (input[2] >= 0.29296875) {
                        var0 = -0.05454546;
                    } else {
                        if (input[0] >= 0.14660645) {
                            var0 = 0.15;
                        } else {
                            var0 = 0.56521744;
                        }
                    }
                }
            }
        }
    }
    double var1;
    if (input[97] >= 0.07879639) {
        if (input[126] >= 0.00019913819) {
            if (input[333] >= 0.00011777198) {
                if (input[83] >= 0.077697754) {
                    if (input[0] >= 0.15093994) {
                        var1 = 0.1227297;
                    } else {
                        var1 = 0.46355087;
                    }
                } else {
                    if (input[11] >= 0.052612305) {
                        var1 = 0.32425258;
                    } else {
                        var1 = -0.31424716;
                    }
                }
            } else {
                var1 = -0.28416663;
            }
        } else {
            var1 = -0.37196612;
        }
    } else {
        if (input[264] >= 0.04222901) {
            if (input[138] >= 0.12724045) {
                if (input[7] >= 0.17053223) {
                    var1 = 0.46353537;
                } else {
                    var1 = -0.15453063;
                }
            } else {
                var1 = -0.30290982;
            }
        } else {
            if (input[244] >= 0.00005081042) {
                if (input[100] >= 0.034729004) {
                    if (input[258] >= 0.038292326) {
                        if (input[7] >= 0.25897217) {
                            var1 = 0.34471154;
                        } else {
                            var1 = 0.044179186;
                        }
                    } else {
                        if (input[334] >= 0.010932604) {
                            if (input[90] >= 0.059387207) {
                                if (input[48] >= 0.12451172) {
                                    if (input[9] >= 0.13043213) {
                                        var1 = -0.316355;
                                    } else {
                                        var1 = 0.3718862;
                                    }
                                } else {
                                    if (input[130] >= 0.09734154) {
                                        if (input[107] >= 0.062805176) {
                                            var1 = 0.38281748;
                                        } else {
                                            if (input[1] >= 0.2692871) {
                                                var1 = -0.41417128;
                                            } else {
                                                var1 = 0.12971988;
                                            }
                                        }
                                    } else {
                                        if (input[33] >= 0.058776855) {
                                            if (input[96] >= 0.08099365) {
                                                if (input[126] >= 0.00023373491) {
                                                    if (input[125] >= 0.00016332766) {
                                                        if (input[8] >= 0.2345581) {
                                                            var1 = -0.39183697;
                                                        } else {
                                                            var1 = 0.19177648;
                                                        }
                                                    } else {
                                                        var1 = 0.42376065;
                                                    }
                                                } else {
                                                    var1 = -0.45388725;
                                                }
                                            } else {
                                                if (input[83] >= 0.059692383) {
                                                    if (input[59] >= 0.12756348) {
                                                        var1 = -0.0054735853;
                                                    } else {
                                                        if (input[120] >= 0.00014377595) {
                                                            if (input[95] >= 0.058288574) {
                                                                if (input[263] >= 0.042827725) {
                                                                    var1 = -0.054043557;
                                                                } else {
                                                                    if (input[233] >= 0.00014865426) {
                                                                        if (input[18] >= 0.116760254) {
                                                                            var1 = -0.14086069;
                                                                        } else {
                                                                            if (input[265] >= 0.043030083) {
                                                                                if (input[4] >= 0.28149414) {
                                                                                    var1 = -0.2866947;
                                                                                } else {
                                                                                    var1 = 0.029905563;
                                                                                }
                                                                            } else {
                                                                                if (input[71] >= 0.12188721) {
                                                                                    var1 = -0.23819444;
                                                                                } else {
                                                                                    var1 = -0.45740357;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        var1 = -0.10900485;
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[280] >= 0.037706308) {
                                                                    var1 = -0.40877697;
                                                                } else {
                                                                    if (input[48] >= 0.07659912) {
                                                                        var1 = -0.048376404;
                                                                    } else {
                                                                        var1 = 0.3335752;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            var1 = -0.035764184;
                                                        }
                                                    }
                                                } else {
                                                    var1 = 0.02342059;
                                                }
                                            }
                                        } else {
                                            if (input[2] >= 0.2701416) {
                                                var1 = -0.29284537;
                                            } else {
                                                var1 = 0.3222435;
                                            }
                                        }
                                    }
                                }
                            } else {
                                var1 = 0.32774377;
                            }
                        } else {
                            if (input[101] >= 0.16448975) {
                                var1 = -0.34957293;
                            } else {
                                var1 = 0.423366;
                            }
                        }
                    }
                } else {
                    if (input[107] >= 0.22766113) {
                        var1 = -0.3088602;
                    } else {
                        var1 = 0.3724372;
                    }
                }
            } else {
                if (input[335] >= 0.022279635) {
                    if (input[70] >= 0.08331299) {
                        var1 = 0.07178167;
                    } else {
                        var1 = -0.43009555;
                    }
                } else {
                    var1 = 0.45559874;
                }
            }
        }
    }
    double var2;
    if (input[97] >= 0.07867432) {
        if (input[9] >= 0.1694336) {
            if (input[239] >= 0.000053408363) {
                if (input[4] >= 0.26037598) {
                    var2 = -0.36006862;
                } else {
                    var2 = -0.09414957;
                }
            } else {
                var2 = 0.24165896;
            }
        } else {
            if (input[11] >= 0.051757812) {
                if (input[10] >= 0.046142578) {
                    var2 = 0.40215474;
                } else {
                    var2 = 0.07283432;
                }
            } else {
                if (input[48] >= 0.08001709) {
                    var2 = 0.2848034;
                } else {
                    var2 = -0.2843534;
                }
            }
        }
    } else {
        if (input[266] >= 0.044594258) {
            if (input[140] >= 0.13710883) {
                if (input[272] >= 0.039823323) {
                    var2 = 0.40344056;
                } else {
                    var2 = 0.0548086;
                }
            } else {
                var2 = -0.17099023;
            }
        } else {
            if (input[244] >= 0.00005081042) {
                if (input[100] >= 0.043518066) {
                    if (input[259] >= 0.03897269) {
                        if (input[7] >= 0.23504639) {
                            var2 = 0.35604775;
                        } else {
                            var2 = -0.26057768;
                        }
                    } else {
                        if (input[85] >= 0.12133789) {
                            if (input[342] >= 0.0036691716) {
                                var2 = -0.24430764;
                            } else {
                                var2 = 0.39356497;
                            }
                        } else {
                            if (input[335] >= 0.006296236) {
                                if (input[130] >= 0.10359517) {
                                    if (input[9] >= 0.09277344) {
                                        if (input[130] >= 0.11191871) {
                                            var2 = 0.0537577;
                                        } else {
                                            var2 = 0.33732185;
                                        }
                                    } else {
                                        var2 = -0.3186678;
                                    }
                                } else {
                                    if (input[79] >= 0.059020996) {
                                        if (input[120] >= 0.00014377595) {
                                            if (input[18] >= 0.11975098) {
                                                var2 = 0.043886125;
                                            } else {
                                                if (input[49] >= 0.0579834) {
                                                    if (input[96] >= 0.091918945) {
                                                        if (input[8] >= 0.25683594) {
                                                            var2 = -0.25509948;
                                                        } else {
                                                            var2 = 0.15381414;
                                                        }
                                                    } else {
                                                        if (input[285] >= 0.054931574) {
                                                            var2 = -0.01542768;
                                                        } else {
                                                            if (input[282] >= 0.014994072) {
                                                                if (input[35] >= 0.0635376) {
                                                                    if (input[353] >= 0.000051085386) {
                                                                        if (input[148] >= 0.35346484) {
                                                                            var2 = -0.06421954;
                                                                        } else {
                                                                            if (input[290] >= 0.056123756) {
                                                                                var2 = -0.078109235;
                                                                            } else {
                                                                                if (input[16] >= 0.11230469) {
                                                                                    var2 = -0.08353494;
                                                                                } else {
                                                                                    var2 = -0.3960279;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        var2 = -0.06955657;
                                                                    }
                                                                } else {
                                                                    if (input[129] >= 0.043817587) {
                                                                        var2 = 0.36560056;
                                                                    } else {
                                                                        var2 = -0.35535613;
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] >= 0.27252197) {
                                                                    var2 = -0.2474119;
                                                                } else {
                                                                    var2 = 0.11713896;
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    var2 = -0.0047950484;
                                                }
                                            }
                                        } else {
                                            var2 = 0.008239117;
                                        }
                                    } else {
                                        if (input[97] >= 0.05633545) {
                                            var2 = -0.13921066;
                                        } else {
                                            var2 = 0.26483524;
                                        }
                                    }
                                }
                            } else {
                                if (input[219] >= 0.00030731873) {
                                    var2 = 0.3699776;
                                } else {
                                    var2 = -0.32985282;
                                }
                            }
                        }
                    }
                } else {
                    if (input[347] >= 0.00006205946) {
                        if (input[228] >= 0.0003122225) {
                            if (input[11] >= 0.05041504) {
                                var2 = 0.16038826;
                            } else {
                                var2 = -0.2977135;
                            }
                        } else {
                            if (input[116] >= 0.2571411) {
                                var2 = 0.049059734;
                            } else {
                                var2 = 0.4369208;
                            }
                        }
                    } else {
                        if (input[251] >= 0.012447698) {
                            var2 = 0.1415391;
                        } else {
                            var2 = -0.39175287;
                        }
                    }
                }
            } else {
                if (input[335] >= 0.022279635) {
                    if (input[163] >= 0.2135784) {
                        var2 = 0.061313514;
                    } else {
                        var2 = -0.37285078;
                    }
                } else {
                    var2 = 0.3879179;
                }
            }
        }
    }
    double var3;
    if (input[96] >= 0.084106445) {
        if (input[126] >= 0.00020340308) {
            if (input[333] >= 0.00011777198) {
                if (input[76] >= 0.07434082) {
                    if (input[24] >= 0.06970215) {
                        var3 = 0.3683808;
                    } else {
                        var3 = 0.104107;
                    }
                } else {
                    var3 = 0.012910803;
                }
            } else {
                var3 = -0.20875047;
            }
        } else {
            if (input[131] >= 0.062206276) {
                var3 = -0.09272671;
            } else {
                var3 = -0.3428806;
            }
        }
    } else {
        if (input[265] >= 0.04248222) {
            if (input[141] >= 0.14143664) {
                if (input[245] >= 0.0053712483) {
                    var3 = -0.09426423;
                } else {
                    var3 = 0.37347388;
                }
            } else {
                var3 = -0.24422634;
            }
        } else {
            if (input[244] >= 0.000051252297) {
                if (input[130] >= 0.08896155) {
                    if (input[227] >= 0.0011868714) {
                        if (input[5] >= 0.26800537) {
                            var3 = -0.3501975;
                        } else {
                            var3 = 0.22852491;
                        }
                    } else {
                        if (input[261] >= 0.030249199) {
                            var3 = 0.33814704;
                        } else {
                            var3 = 0.021922287;
                        }
                    }
                } else {
                    if (input[32] >= 0.06060791) {
                        if (input[77] >= 0.12335205) {
                            if (input[54] >= 0.1126709) {
                                var3 = 0.25016874;
                            } else {
                                var3 = -0.05489288;
                            }
                        } else {
                            if (input[259] >= 0.037818417) {
                                if (input[107] >= 0.058532715) {
                                    var3 = 0.27881792;
                                } else {
                                    var3 = -0.22068788;
                                }
                            } else {
                                if (input[82] >= 0.060913086) {
                                    if (input[97] >= 0.08251953) {
                                        var3 = 0.08296539;
                                    } else {
                                        if (input[85] >= 0.12133789) {
                                            if (input[8] >= 0.23486328) {
                                                var3 = -0.25142214;
                                            } else {
                                                var3 = 0.26068386;
                                            }
                                        } else {
                                            if (input[334] >= 0.018315459) {
                                                if (input[26] >= 0.060180664) {
                                                    if (input[108] >= 0.043518066) {
                                                        if (input[120] >= 0.00014980554) {
                                                            if (input[98] >= 0.08135986) {
                                                                var3 = -0.006625628;
                                                            } else {
                                                                if (input[90] >= 0.06036377) {
                                                                    if (input[100] >= 0.04046631) {
                                                                        if (input[285] >= 0.054241247) {
                                                                            var3 = -0.050915677;
                                                                        } else {
                                                                            if (input[33] >= 0.1227417) {
                                                                                if (input[9] >= 0.15979004) {
                                                                                    var3 = -0.24184403;
                                                                                } else {
                                                                                    var3 = 0.07022272;
                                                                                }
                                                                            } else {
                                                                                if (input[42] >= 0.12414551) {
                                                                                    var3 = -0.061550878;
                                                                                } else {
                                                                                    var3 = -0.3661683;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[12] >= 0.062683105) {
                                                                            var3 = 0.29340813;
                                                                        } else {
                                                                            var3 = -0.325348;
                                                                        }
                                                                    }
                                                                } else {
                                                                    var3 = -0.040152345;
                                                                }
                                                            }
                                                        } else {
                                                            if (input[335] >= 0.028192155) {
                                                                var3 = -0.31632644;
                                                            } else {
                                                                var3 = 0.3280151;
                                                            }
                                                        }
                                                    } else {
                                                        if (input[16] >= 0.07501221) {
                                                            var3 = -0.32070792;
                                                        } else {
                                                            var3 = 0.38764635;
                                                        }
                                                    }
                                                } else {
                                                    if (input[77] >= 0.06896973) {
                                                        var3 = -0.23356903;
                                                    } else {
                                                        var3 = 0.14666486;
                                                    }
                                                }
                                            } else {
                                                if (input[221] >= 0.00028316193) {
                                                    if (input[127] >= 0.040470555) {
                                                        var3 = -0.1973764;
                                                    } else {
                                                        if (input[74] >= 0.07507324) {
                                                            var3 = 0.5591955;
                                                        } else {
                                                            var3 = 0.06620305;
                                                        }
                                                    }
                                                } else {
                                                    if (input[54] >= 0.06713867) {
                                                        var3 = -0.36413;
                                                    } else {
                                                        var3 = -0.08250759;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[8] >= 0.25012207) {
                                        var3 = -0.24831004;
                                    } else {
                                        var3 = 0.27792665;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[132] >= 0.06525286) {
                            var3 = 0.31072778;
                        } else {
                            var3 = -0.23100622;
                        }
                    }
                }
            } else {
                if (input[334] >= 0.032618567) {
                    var3 = -0.3384926;
                } else {
                    if (input[67] >= 0.074279785) {
                        var3 = 0.36715573;
                    } else {
                        var3 = -0.10323177;
                    }
                }
            }
        }
    }
    double var4;
    if (input[97] >= 0.07757568) {
        if (input[126] >= 0.00019913819) {
            if (input[11] >= 0.0524292) {
                if (input[333] >= 0.00012627436) {
                    if (input[0] >= 0.15093994) {
                        var4 = 0.070367016;
                    } else {
                        var4 = 0.35009757;
                    }
                } else {
                    var4 = -0.14771004;
                }
            } else {
                if (input[49] >= 0.084472656) {
                    var4 = 0.22463892;
                } else {
                    var4 = -0.22750646;
                }
            }
        } else {
            if (input[188] >= 0.25267112) {
                var4 = -0.0801727;
            } else {
                var4 = -0.29737553;
            }
        }
    } else {
        if (input[263] >= 0.042146847) {
            if (input[138] >= 0.12649387) {
                if (input[4] >= 0.2861328) {
                    var4 = 0.05899721;
                } else {
                    var4 = 0.34187335;
                }
            } else {
                var4 = -0.19732568;
            }
        } else {
            if (input[334] >= 0.018435083) {
                if (input[132] >= 0.102882475) {
                    if (input[342] >= 0.0025152927) {
                        if (input[258] >= 0.038372263) {
                            var4 = 0.12565076;
                        } else {
                            var4 = -0.339247;
                        }
                    } else {
                        var4 = 0.4320282;
                    }
                } else {
                    if (input[100] >= 0.03540039) {
                        if (input[33] >= 0.1227417) {
                            if (input[258] >= 0.022180745) {
                                var4 = 0.30012342;
                            } else {
                                var4 = -0.23212162;
                            }
                        } else {
                            if (input[125] >= 0.00014360982) {
                                if (input[33] >= 0.062438965) {
                                    if (input[144] >= 0.24004069) {
                                        if (input[339] >= 0.020593876) {
                                            var4 = -0.29733422;
                                        } else {
                                            var4 = 0.3504293;
                                        }
                                    } else {
                                        if (input[130] >= 0.09960706) {
                                            if (input[2] >= 0.27197266) {
                                                var4 = -0.24234985;
                                            } else {
                                                var4 = 0.22399764;
                                            }
                                        } else {
                                            if (input[96] >= 0.053649902) {
                                                if (input[29] >= 0.06414795) {
                                                    if (input[352] >= 0.000051018727) {
                                                        if (input[142] >= 0.26427078) {
                                                            var4 = -0.030473886;
                                                        } else {
                                                            if (input[108] >= 0.038208008) {
                                                                if (input[18] >= 0.116760254) {
                                                                    var4 = -0.057153657;
                                                                } else {
                                                                    if (input[71] >= 0.12194824) {
                                                                        if (input[6] >= 0.27423096) {
                                                                            var4 = 0.08793868;
                                                                        } else {
                                                                            var4 = -0.23943979;
                                                                        }
                                                                    } else {
                                                                        if (input[111] >= 0.033996582) {
                                                                            if (input[86] >= 0.06072998) {
                                                                                if (input[27] >= 0.058288574) {
                                                                                    var4 = -0.34716251;
                                                                                } else {
                                                                                    var4 = -0.09513287;
                                                                                }
                                                                            } else {
                                                                                var4 = -0.067106746;
                                                                            }
                                                                        } else {
                                                                            var4 = -0.07084027;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                var4 = -0.04860113;
                                                            }
                                                        }
                                                    } else {
                                                        var4 = -0.0391867;
                                                    }
                                                } else {
                                                    if (input[226] >= 0.00025906804) {
                                                        var4 = 0.48893163;
                                                    } else {
                                                        var4 = -0.32131487;
                                                    }
                                                }
                                            } else {
                                                if (input[1] >= 0.272583) {
                                                    var4 = -0.19719183;
                                                } else {
                                                    var4 = 0.13442649;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[130] >= 0.047864147) {
                                        var4 = 0.30502182;
                                    } else {
                                        var4 = -0.25588652;
                                    }
                                }
                            } else {
                                var4 = 0.08244115;
                            }
                        }
                    } else {
                        if (input[132] >= 0.058693647) {
                            var4 = 0.22222885;
                        } else {
                            var4 = -0.23202033;
                        }
                    }
                }
            } else {
                if (input[220] >= 0.0003028503) {
                    if (input[127] >= 0.03893158) {
                        if (input[8] >= 0.24731445) {
                            var4 = -0.22853191;
                        } else {
                            var4 = 0.033675622;
                        }
                    } else {
                        if (input[219] >= 0.00035413154) {
                            var4 = 0.40653732;
                        } else {
                            var4 = 0.019289138;
                        }
                    }
                } else {
                    if (input[239] >= 0.00005191841) {
                        var4 = -0.3353427;
                    } else {
                        var4 = 0.07038051;
                    }
                }
            }
        }
    }
    double var5;
    if (input[96] >= 0.084106445) {
        if (input[9] >= 0.16809082) {
            if (input[170] >= 0.00016592468) {
                var5 = -0.28641984;
            } else {
                var5 = 0.083252944;
            }
        } else {
            if (input[83] >= 0.07849121) {
                if (input[2] >= 0.2399292) {
                    var5 = 0.33142117;
                } else {
                    var5 = 0.107030444;
                }
            } else {
                var5 = 0.03145633;
            }
        }
    } else {
        if (input[264] >= 0.04222901) {
            if (input[7] >= 0.1762085) {
                if (input[8] >= 0.2625122) {
                    var5 = 0.014581296;
                } else {
                    var5 = 0.3232082;
                }
            } else {
                var5 = -0.15122025;
            }
        } else {
            if (input[9] >= 0.14337158) {
                if (input[336] >= 0.00276325) {
                    if (input[253] >= 0.024526363) {
                        var5 = 0.10324;
                    } else {
                        if (input[240] >= 0.000049922346) {
                            if (input[98] >= 0.078186035) {
                                var5 = -0.069225445;
                            } else {
                                if (input[130] >= 0.08804417) {
                                    var5 = -0.12240452;
                                } else {
                                    var5 = -0.33420217;
                                }
                            }
                        } else {
                            var5 = -0.05216339;
                        }
                    }
                } else {
                    var5 = 0.15407407;
                }
            } else {
                if (input[101] >= 0.04815674) {
                    if (input[50] >= 0.06530762) {
                        if (input[352] >= 0.000052868687) {
                            if (input[33] >= 0.122558594) {
                                var5 = 0.23366022;
                            } else {
                                if (input[96] >= 0.077941895) {
                                    if (input[122] >= 0.00016555045) {
                                        var5 = -0.219003;
                                    } else {
                                        if (input[122] >= 0.00016055928) {
                                            var5 = 0.075926155;
                                        } else {
                                            var5 = 0.2918096;
                                        }
                                    }
                                } else {
                                    if (input[339] >= 0.027612146) {
                                        var5 = 0.17356098;
                                    } else {
                                        if (input[47] >= 0.06304932) {
                                            if (input[159] >= 0.25577682) {
                                                if (input[222] >= 0.0060956543) {
                                                    if (input[138] >= 0.18295413) {
                                                        var5 = 0.002904286;
                                                    } else {
                                                        var5 = -0.29318452;
                                                    }
                                                } else {
                                                    var5 = 0.5495539;
                                                }
                                            } else {
                                                if (input[68] >= 0.122680664) {
                                                    var5 = 0.08843779;
                                                } else {
                                                    if (input[99] >= 0.042419434) {
                                                        if (input[33] >= 0.06488037) {
                                                            if (input[266] >= 0.044629343) {
                                                                var5 = 0.0067959144;
                                                            } else {
                                                                if (input[71] >= 0.12207031) {
                                                                    var5 = -0.009396922;
                                                                } else {
                                                                    if (input[97] >= 0.077941895) {
                                                                        var5 = -0.028275823;
                                                                    } else {
                                                                        if (input[333] >= 0.018911975) {
                                                                            if (input[108] >= 0.043518066) {
                                                                                if (input[338] >= 0.031032661) {
                                                                                    var5 = -0.057529815;
                                                                                } else {
                                                                                    var5 = -0.3326056;
                                                                                }
                                                                            } else {
                                                                                if (input[11] >= 0.059326172) {
                                                                                    var5 = -0.24524093;
                                                                                } else {
                                                                                    var5 = 0.1073487;
                                                                                }
                                                                            }
                                                                        } else {
                                                                            var5 = -0.076640874;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[133] >= 0.052492272) {
                                                                var5 = 0.17109524;
                                                            } else {
                                                                var5 = -0.19685605;
                                                            }
                                                        }
                                                    } else {
                                                        if (input[101] >= 0.08972168) {
                                                            var5 = -0.22846787;
                                                        } else {
                                                            var5 = 0.26768473;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            var5 = 0.16108638;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[114] >= 0.2852173) {
                                var5 = -0.18585783;
                            } else {
                                var5 = 0.2980459;
                            }
                        }
                    } else {
                        if (input[299] >= 0.04262262) {
                            var5 = -0.19085057;
                        } else {
                            if (input[188] >= 0.12523152) {
                                var5 = 0.38400316;
                            } else {
                                var5 = -0.04590468;
                            }
                        }
                    }
                } else {
                    if (input[222] >= 0.0012743175) {
                        var5 = -0.21561591;
                    } else {
                        if (input[114] >= 0.2701416) {
                            var5 = -0.1560517;
                        } else {
                            if (input[5] >= 0.28179932) {
                                var5 = 0.068751074;
                            } else {
                                var5 = 0.37205583;
                            }
                        }
                    }
                }
            }
        }
    }
    double var6;
    if (input[97] >= 0.07757568) {
        if (input[9] >= 0.16467285) {
            if (input[239] >= 0.00005347163) {
                if (input[4] >= 0.26281738) {
                    var6 = -0.26575577;
                } else {
                    var6 = -0.03787419;
                }
            } else {
                var6 = 0.12067568;
            }
        } else {
            if (input[11] >= 0.051757812) {
                if (input[10] >= 0.047668457) {
                    var6 = 0.3220825;
                } else {
                    var6 = 0.035081517;
                }
            } else {
                if (input[48] >= 0.08001709) {
                    var6 = 0.14187972;
                } else {
                    var6 = -0.20993027;
                }
            }
        }
    } else {
        if (input[258] >= 0.03823755) {
            if (input[245] >= 0.0029858793) {
                var6 = 0.037698068;
            } else {
                var6 = 0.30622184;
            }
        } else {
            if (input[334] >= 0.020107545) {
                if (input[141] >= 0.14073463) {
                    if (input[222] >= 0.0074661304) {
                        if (input[319] >= 0.03924617) {
                            if (input[264] >= 0.043560226) {
                                var6 = 0.08018577;
                            } else {
                                if (input[2] >= 0.2526245) {
                                    if (input[141] >= 0.1413255) {
                                        var6 = -0.32038513;
                                    } else {
                                        var6 = -0.035339266;
                                    }
                                } else {
                                    var6 = 0.033025824;
                                }
                            }
                        } else {
                            if (input[214] >= 0.13958591) {
                                if (input[1] >= 0.26831055) {
                                    var6 = -0.023886897;
                                } else {
                                    var6 = 0.52024525;
                                }
                            } else {
                                var6 = -0.24611267;
                            }
                        }
                    } else {
                        if (input[131] >= 0.05320187) {
                            var6 = 0.40448666;
                        } else {
                            var6 = -0.20082793;
                        }
                    }
                } else {
                    if (input[95] >= 0.057556152) {
                        if (input[108] >= 0.043518066) {
                            if (input[120] >= 0.00014795434) {
                                if (input[100] >= 0.03540039) {
                                    if (input[111] >= 0.033996582) {
                                        if (input[30] >= 0.06048584) {
                                            if (input[93] >= 0.12335205) {
                                                var6 = -0.061535392;
                                            } else {
                                                if (input[86] >= 0.06072998) {
                                                    var6 = -0.32469925;
                                                } else {
                                                    var6 = -0.07239251;
                                                }
                                            }
                                        } else {
                                            var6 = -0.047743578;
                                        }
                                    } else {
                                        var6 = -0.021516081;
                                    }
                                } else {
                                    if (input[133] >= 0.067020655) {
                                        var6 = 0.14322422;
                                    } else {
                                        var6 = -0.18614547;
                                    }
                                }
                            } else {
                                var6 = 0.0068247397;
                            }
                        } else {
                            if (input[134] >= 0.06975599) {
                                var6 = -0.2365515;
                            } else {
                                var6 = 0.24548066;
                            }
                        }
                    } else {
                        var6 = 0.064257964;
                    }
                }
            } else {
                if (input[220] >= 0.00030920148) {
                    if (input[127] >= 0.03893158) {
                        if (input[63] >= 0.115112305) {
                            var6 = 0.18394467;
                        } else {
                            var6 = -0.22302146;
                        }
                    } else {
                        if (input[219] >= 0.00036436715) {
                            var6 = 0.37141368;
                        } else {
                            var6 = 0.033434942;
                        }
                    }
                } else {
                    if (input[243] >= 0.000052539886) {
                        var6 = -0.31021732;
                    } else {
                        var6 = 0.0708309;
                    }
                }
            }
        }
    }
    double var7;
    if (input[96] >= 0.082092285) {
        if (input[126] >= 0.00020340308) {
            if (input[108] >= 0.25567627) {
                if (input[346] >= 0.000054106975) {
                    var7 = -0.12841271;
                } else {
                    var7 = 0.1807574;
                }
            } else {
                if (input[1] >= 0.24487305) {
                    var7 = 0.3121129;
                } else {
                    var7 = 0.07034263;
                }
            }
        } else {
            var7 = -0.25333083;
        }
    } else {
        if (input[263] >= 0.040956616) {
            if (input[196] >= 0.21194199) {
                if (input[139] >= 0.15234773) {
                    var7 = 0.30025232;
                } else {
                    var7 = -0.0017642232;
                }
            } else {
                var7 = -0.11198925;
            }
        } else {
            if (input[8] >= 0.2576294) {
                if (input[335] >= 0.007191146) {
                    if (input[243] >= 0.00004986005) {
                        var7 = -0.31669062;
                    } else {
                        var7 = -0.057796065;
                    }
                } else {
                    var7 = 0.07492226;
                }
            } else {
                if (input[101] >= 0.054626465) {
                    if (input[354] >= 0.000053215255) {
                        if (input[339] >= 0.026564393) {
                            if (input[243] >= 0.000055410153) {
                                var7 = 0.34996387;
                            } else {
                                var7 = -0.08777317;
                            }
                        } else {
                            if (input[50] >= 0.06414795) {
                                if (input[42] >= 0.11456299) {
                                    if (input[224] >= 0.004896594) {
                                        var7 = -0.22351383;
                                    } else {
                                        var7 = 0.25762543;
                                    }
                                } else {
                                    if (input[278] >= 0.049117472) {
                                        if (input[84] >= 0.07788086) {
                                            var7 = 0.16824727;
                                        } else {
                                            var7 = -0.18784648;
                                        }
                                    } else {
                                        if (input[100] >= 0.041931152) {
                                            if (input[33] >= 0.06488037) {
                                                if (input[232] >= 0.00015344843) {
                                                    if (input[147] >= 0.21850118) {
                                                        if (input[107] >= 0.061706543) {
                                                            var7 = 0.18317804;
                                                        } else {
                                                            var7 = -0.24286413;
                                                        }
                                                    } else {
                                                        if (input[44] >= 0.06335449) {
                                                            if (input[71] >= 0.06488037) {
                                                                var7 = -0.31437737;
                                                            } else {
                                                                var7 = -0.05618612;
                                                            }
                                                        } else {
                                                            var7 = -0.051954914;
                                                        }
                                                    }
                                                } else {
                                                    var7 = 0.0040451735;
                                                }
                                            } else {
                                                var7 = -0.033475894;
                                            }
                                        } else {
                                            if (input[218] >= 0.02381358) {
                                                var7 = -0.1724355;
                                            } else {
                                                var7 = 0.1525239;
                                            }
                                        }
                                    }
                                }
                            } else {
                                var7 = 0.11438766;
                            }
                        }
                    } else {
                        if (input[79] >= 0.08123779) {
                            var7 = 0.2590452;
                        } else {
                            if (input[3] >= 0.28033447) {
                                var7 = -0.19685395;
                            } else {
                                var7 = -0.027538246;
                            }
                        }
                    }
                } else {
                    if (input[335] >= 0.032387845) {
                        if (input[87] >= 0.07824707) {
                            var7 = -0.061967283;
                        } else {
                            var7 = -0.2809266;
                        }
                    } else {
                        if (input[139] >= 0.099547334) {
                            if (input[248] >= 0.0107254945) {
                                var7 = -0.05159854;
                            } else {
                                if (input[114] >= 0.26245117) {
                                    var7 = -0.018469617;
                                } else {
                                    var7 = 0.3873116;
                                }
                            }
                        } else {
                            if (input[216] >= 0.05050042) {
                                var7 = -0.23689175;
                            } else {
                                var7 = 0.23132384;
                            }
                        }
                    }
                }
            }
        }
    }
    double var8;
    if (input[97] >= 0.08074951) {
        if (input[9] >= 0.16455078) {
            if (input[152] >= 0.00016174829) {
                var8 = -0.15009709;
            } else {
                var8 = 0.0885776;
            }
        } else {
            if (input[45] >= 0.07537842) {
                var8 = 0.29779014;
            } else {
                var8 = 0.07158344;
            }
        }
    } else {
        if (input[265] >= 0.042082593) {
            if (input[1] >= 0.28155518) {
                var8 = -0.09588469;
            } else {
                if (input[204] >= 0.21022397) {
                    var8 = 0.28805858;
                } else {
                    var8 = 0.06304375;
                }
            }
        } else {
            if (input[334] >= 0.020107545) {
                if (input[133] >= 0.10121535) {
                    if (input[342] >= 0.0017031648) {
                        if (input[97] >= 0.06964111) {
                            var8 = 0.12139555;
                        } else {
                            if (input[337] >= 0.03383022) {
                                var8 = -0.047728796;
                            } else {
                                var8 = -0.2967802;
                            }
                        }
                    } else {
                        var8 = 0.33970833;
                    }
                } else {
                    if (input[108] >= 0.043518066) {
                        if (input[98] >= 0.074279785) {
                            if (input[12] >= 0.06359863) {
                                var8 = 0.19485788;
                            } else {
                                var8 = -0.19414783;
                            }
                        } else {
                            if (input[110] >= 0.043640137) {
                                if (input[33] >= 0.1227417) {
                                    var8 = 0.01208649;
                                } else {
                                    if (input[40] >= 0.06048584) {
                                        if (input[100] >= 0.03277588) {
                                            if (input[233] >= 0.00015061273) {
                                                if (input[65] >= 0.061828613) {
                                                    if (input[26] >= 0.12402344) {
                                                        var8 = -0.040247303;
                                                    } else {
                                                        if (input[125] >= 0.00014702699) {
                                                            if (input[144] >= 0.24707347) {
                                                                var8 = -0.05465008;
                                                            } else {
                                                                if (input[37] >= 0.062072754) {
                                                                    var8 = -0.3120659;
                                                                } else {
                                                                    var8 = -0.078258;
                                                                }
                                                            }
                                                        } else {
                                                            var8 = -0.041632283;
                                                        }
                                                    }
                                                } else {
                                                    var8 = -0.060252193;
                                                }
                                            } else {
                                                var8 = -0.022358239;
                                            }
                                        } else {
                                            var8 = 0.0057705287;
                                        }
                                    } else {
                                        var8 = -0.008102677;
                                    }
                                }
                            } else {
                                if (input[42] >= 0.074645996) {
                                    var8 = -0.22598946;
                                } else {
                                    var8 = 0.18355764;
                                }
                            }
                        }
                    } else {
                        if (input[45] >= 0.078552246) {
                            var8 = -0.19858578;
                        } else {
                            var8 = 0.33267775;
                        }
                    }
                }
            } else {
                if (input[339] >= 0.000111026195) {
                    if (input[127] >= 0.038301088) {
                        if (input[63] >= 0.11224365) {
                            var8 = 0.120361425;
                        } else {
                            var8 = -0.18419147;
                        }
                    } else {
                        if (input[220] >= 0.00030920148) {
                            var8 = 0.3285113;
                        } else {
                            var8 = 0.0035077445;
                        }
                    }
                } else {
                    if (input[245] >= 0.000052335818) {
                        var8 = -0.29537728;
                    } else {
                        var8 = -0.0292481;
                    }
                }
            }
        }
    }
    double var9;
    if (input[97] >= 0.07720947) {
        if (input[12] >= 0.057617188) {
            if (input[332] >= 0.00011116892) {
                if (input[225] >= 0.011113202) {
                    var9 = 0.069061376;
                } else {
                    var9 = 0.2920522;
                }
            } else {
                var9 = -0.14106986;
            }
        } else {
            if (input[73] >= 0.080444336) {
                var9 = 0.027566304;
            } else {
                var9 = -0.21689293;
            }
        }
    } else {
        if (input[258] >= 0.03823755) {
            if (input[109] >= 0.047424316) {
                var9 = 0.26832214;
            } else {
                var9 = 0.075014174;
            }
        } else {
            if (input[9] >= 0.14849854) {
                if (input[216] >= 0.021802742) {
                    if (input[132] >= 0.10553249) {
                        var9 = -0.033790883;
                    } else {
                        if (input[125] >= 0.00014874942) {
                            var9 = -0.305027;
                        } else {
                            var9 = -0.07572566;
                        }
                    }
                } else {
                    var9 = 0.087518;
                }
            } else {
                if (input[125] >= 0.00016560775) {
                    if (input[34] >= 0.12023926) {
                        var9 = 0.20000157;
                    } else {
                        if (input[333] >= 0.019938558) {
                            if (input[31] >= 0.062805176) {
                                if (input[99] >= 0.041625977) {
                                    if (input[289] >= 0.052535355) {
                                        var9 = 0.0034210838;
                                    } else {
                                        if (input[101] >= 0.04711914) {
                                            if (input[268] >= 0.044578854) {
                                                var9 = -0.077741794;
                                            } else {
                                                if (input[0] >= 0.12042236) {
                                                    var9 = -0.30535474;
                                                } else {
                                                    var9 = -0.08551306;
                                                }
                                            }
                                        } else {
                                            var9 = -0.07014728;
                                        }
                                    }
                                } else {
                                    var9 = 0.068198316;
                                }
                            } else {
                                var9 = 0.09879167;
                            }
                        } else {
                            if (input[11] >= 0.053710938) {
                                var9 = 0.21414869;
                            } else {
                                var9 = -0.06008672;
                            }
                        }
                    }
                } else {
                    if (input[141] >= 0.12696725) {
                        if (input[351] >= 0.00031334927) {
                            if (input[253] >= 0.022852719) {
                                var9 = -0.021455996;
                            } else {
                                var9 = -0.22054018;
                            }
                        } else {
                            if (input[131] >= 0.054760084) {
                                if (input[14] >= 0.08355713) {
                                    var9 = -0.007394933;
                                } else {
                                    if (input[245] >= 0.000052948824) {
                                        var9 = 0.39549354;
                                    } else {
                                        var9 = 0.105456136;
                                    }
                                }
                            } else {
                                var9 = -0.1149869;
                            }
                        }
                    } else {
                        if (input[334] >= 0.020054225) {
                            if (input[60] >= 0.065979004) {
                                if (input[99] >= 0.047058105) {
                                    if (input[120] >= 0.00015541201) {
                                        var9 = -0.29011896;
                                    } else {
                                        var9 = -0.08375369;
                                    }
                                } else {
                                    var9 = -0.062462296;
                                }
                            } else {
                                var9 = 0.1442919;
                            }
                        } else {
                            if (input[102] >= 0.14099121) {
                                if (input[241] >= 0.00005386804) {
                                    var9 = -0.19562462;
                                } else {
                                    var9 = -0.00048806044;
                                }
                            } else {
                                var9 = 0.23230949;
                            }
                        }
                    }
                }
            }
        }
    }
    double var10;
    if (input[96] >= 0.082092285) {
        if (input[9] >= 0.17248535) {
            if (input[24] >= 0.27496338) {
                var10 = 0.044165216;
            } else {
                var10 = -0.22855465;
            }
        } else {
            if (input[11] >= 0.050964355) {
                var10 = 0.2800132;
            } else {
                var10 = 0.0053833243;
            }
        }
    } else {
        if (input[263] >= 0.040956616) {
            if (input[5] >= 0.28240967) {
                var10 = -0.061411466;
            } else {
                if (input[167] >= 0.22129603) {
                    var10 = 0.268744;
                } else {
                    var10 = 0.062038414;
                }
            }
        } else {
            if (input[8] >= 0.2588501) {
                if (input[355] >= 0.000051528983) {
                    var10 = -0.30300653;
                } else {
                    var10 = 0.03941209;
                }
            } else {
                if (input[125] >= 0.00017023836) {
                    if (input[64] >= 0.11834717) {
                        var10 = 0.104618035;
                    } else {
                        if (input[38] >= 0.06512451) {
                            if (input[101] >= 0.04638672) {
                                if (input[97] >= 0.07318115) {
                                    var10 = -0.03361503;
                                } else {
                                    if (input[9] >= 0.042175293) {
                                        var10 = -0.29572916;
                                    } else {
                                        var10 = -0.060762413;
                                    }
                                }
                            } else {
                                var10 = 0.016203256;
                            }
                        } else {
                            var10 = 0.06887322;
                        }
                    }
                } else {
                    if (input[132] >= 0.08252409) {
                        if (input[247] >= 0.0079004895) {
                            if (input[344] >= 0.0042591067) {
                                var10 = -0.18680602;
                            } else {
                                var10 = 0.04194494;
                            }
                        } else {
                            if (input[297] >= 0.04417902) {
                                var10 = 0.065851375;
                            } else {
                                var10 = 0.34093753;
                            }
                        }
                    } else {
                        if (input[334] >= 0.019990318) {
                            if (input[145] >= 0.15707892) {
                                if (input[271] >= 0.03560052) {
                                    if (input[142] >= 0.1621589) {
                                        var10 = -0.004101595;
                                    } else {
                                        var10 = -0.19288206;
                                    }
                                } else {
                                    if (input[151] >= 0.13535872) {
                                        var10 = 0.26386526;
                                    } else {
                                        var10 = 0.038497116;
                                    }
                                }
                            } else {
                                if (input[95] >= 0.0635376) {
                                    if (input[35] >= 0.11279297) {
                                        var10 = -0.05499144;
                                    } else {
                                        var10 = -0.28650084;
                                    }
                                } else {
                                    var10 = 0.03682072;
                                }
                            }
                        } else {
                            if (input[221] >= 0.0002694701) {
                                if (input[216] >= 0.050483137) {
                                    var10 = 0.055043343;
                                } else {
                                    var10 = 0.2753489;
                                }
                            } else {
                                if (input[240] >= 0.00005429765) {
                                    var10 = -0.19701064;
                                } else {
                                    var10 = -0.036302783;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var11;
    if (input[96] >= 0.08099365) {
        if (input[126] >= 0.00020340308) {
            if (input[108] >= 0.25567627) {
                var11 = -0.029723205;
            } else {
                if (input[1] >= 0.24908447) {
                    var11 = 0.2776681;
                } else {
                    var11 = 0.046538226;
                }
            }
        } else {
            var11 = -0.20613201;
        }
    } else {
        if (input[265] >= 0.04248222) {
            if (input[1] >= 0.27972412) {
                var11 = -0.019813407;
            } else {
                var11 = 0.24755786;
            }
        } else {
            if (input[8] >= 0.2584839) {
                if (input[355] >= 0.000051528983) {
                    var11 = -0.2970579;
                } else {
                    var11 = -0.008010071;
                }
            } else {
                if (input[141] >= 0.14046505) {
                    if (input[2] >= 0.27630615) {
                        if (input[220] >= 0.054269057) {
                            var11 = -0.25293407;
                        } else {
                            var11 = 0.017246097;
                        }
                    } else {
                        if (input[247] >= 0.010140773) {
                            var11 = -0.1261341;
                        } else {
                            if (input[226] >= 0.033228204) {
                                var11 = -0.0660804;
                            } else {
                                if (input[255] >= 0.020927805) {
                                    var11 = 0.321831;
                                } else {
                                    var11 = -0.025179336;
                                }
                            }
                        }
                    }
                } else {
                    if (input[333] >= 0.019936237) {
                        if (input[99] >= 0.040527344) {
                            if (input[120] >= 0.0001496019) {
                                if (input[108] >= 0.043518066) {
                                    if (input[110] >= 0.039245605) {
                                        if (input[37] >= 0.06536865) {
                                            if (input[97] >= 0.07672119) {
                                                var11 = -0.020051736;
                                            } else {
                                                if (input[334] >= 0.015584886) {
                                                    if (input[198] >= 0.0936573) {
                                                        var11 = -0.29479334;
                                                    } else {
                                                        var11 = -0.096461706;
                                                    }
                                                } else {
                                                    var11 = -0.064850934;
                                                }
                                            }
                                        } else {
                                            var11 = -0.015862012;
                                        }
                                    } else {
                                        var11 = 0.051251877;
                                    }
                                } else {
                                    var11 = 0.05631834;
                                }
                            } else {
                                var11 = 0.08734074;
                            }
                        } else {
                            if (input[112] >= 0.22570801) {
                                var11 = -0.11296055;
                            } else {
                                var11 = 0.20901565;
                            }
                        }
                    } else {
                        if (input[220] >= 0.00030312387) {
                            var11 = 0.22828989;
                        } else {
                            var11 = -0.055133887;
                        }
                    }
                }
            }
        }
    }
    double var12;
    if (input[126] >= 0.0002501273) {
        if (input[96] >= 0.07318115) {
            if (input[11] >= 0.0524292) {
                if (input[106] >= 0.05279541) {
                    if (input[344] >= 0.000055803408) {
                        var12 = 0.27377844;
                    } else {
                        var12 = 0.016919741;
                    }
                } else {
                    if (input[98] >= 0.07623291) {
                        var12 = 0.16158275;
                    } else {
                        var12 = -0.12558669;
                    }
                }
            } else {
                if (input[73] >= 0.08642578) {
                    var12 = 0.15434822;
                } else {
                    var12 = -0.20402497;
                }
            }
        } else {
            if (input[258] >= 0.03823755) {
                var12 = 0.2081887;
            } else {
                if (input[5] >= 0.2649536) {
                    if (input[324] >= 0.017233506) {
                        if (input[34] >= 0.0680542) {
                            if (input[35] >= 0.117004395) {
                                var12 = 0.0777883;
                            } else {
                                if (input[354] >= 0.000052677817) {
                                    if (input[61] >= 0.066101074) {
                                        if (input[101] >= 0.04711914) {
                                            if (input[95] >= 0.08929443) {
                                                var12 = -0.06762181;
                                            } else {
                                                if (input[341] >= 0.021734517) {
                                                    var12 = -0.08196602;
                                                } else {
                                                    var12 = -0.29131263;
                                                }
                                            }
                                        } else {
                                            var12 = -0.043093905;
                                        }
                                    } else {
                                        var12 = -0.03353336;
                                    }
                                } else {
                                    var12 = 0.009414479;
                                }
                            }
                        } else {
                            if (input[132] >= 0.06779644) {
                                var12 = 0.20194086;
                            } else {
                                var12 = -0.17741194;
                            }
                        }
                    } else {
                        var12 = 0.15934725;
                    }
                } else {
                    if (input[140] >= 0.11859031) {
                        if (input[119] >= 0.00016758195) {
                            var12 = -0.040865768;
                        } else {
                            var12 = 0.24636932;
                        }
                    } else {
                        if (input[120] >= 0.00016062333) {
                            if (input[215] >= 0.0645591) {
                                var12 = -0.2372432;
                            } else {
                                var12 = -0.04505927;
                            }
                        } else {
                            var12 = 0.089121446;
                        }
                    }
                }
            }
        }
    } else {
        if (input[280] >= 0.05028028) {
            var12 = -0.059017304;
        } else {
            var12 = -0.29301807;
        }
    }
    double var13;
    if (input[130] >= 0.08426453) {
        if (input[227] >= 0.016845912) {
            if (input[339] >= 0.02749474) {
                var13 = 0.1618696;
            } else {
                var13 = -0.16995594;
            }
        } else {
            if (input[149] >= 0.17329165) {
                var13 = 0.2640037;
            } else {
                var13 = 0.05894011;
            }
        }
    } else {
        if (input[96] >= 0.089538574) {
            if (input[126] >= 0.0009934335) {
                var13 = 0.24145247;
            } else {
                var13 = -0.079996295;
            }
        } else {
            if (input[8] >= 0.26190186) {
                if (input[335] >= 0.010997592) {
                    var13 = -0.2882432;
                } else {
                    var13 = -0.052191194;
                }
            } else {
                if (input[119] >= 0.00015780453) {
                    if (input[115] >= 0.24591064) {
                        if (input[244] >= 0.000052673095) {
                            if (input[48] >= 0.11315918) {
                                var13 = -0.027636034;
                            } else {
                                if (input[67] >= 0.06817627) {
                                    var13 = -0.2796849;
                                } else {
                                    var13 = -0.08052558;
                                }
                            }
                        } else {
                            if (input[39] >= 0.09020996) {
                                var13 = 0.15829124;
                            } else {
                                var13 = -0.09935532;
                            }
                        }
                    } else {
                        if (input[223] >= 0.0011356095) {
                            if (input[108] >= 0.043884277) {
                                if (input[41] >= 0.070495605) {
                                    if (input[135] >= 0.14847288) {
                                        var13 = -0.056168012;
                                    } else {
                                        var13 = -0.25084633;
                                    }
                                } else {
                                    var13 = 0.05886431;
                                }
                            } else {
                                var13 = 0.17472214;
                            }
                        } else {
                            var13 = 0.21512829;
                        }
                    }
                } else {
                    if (input[313] >= 0.040411852) {
                        if (input[2] >= 0.27801514) {
                            var13 = -0.16521141;
                        } else {
                            var13 = -0.026932549;
                        }
                    } else {
                        if (input[109] >= 0.25256348) {
                            var13 = -0.094138816;
                        } else {
                            if (input[247] >= 0.007937508) {
                                var13 = -0.05231936;
                            } else {
                                var13 = 0.2661057;
                            }
                        }
                    }
                }
            }
        }
    }
    double var14;
    if (input[126] >= 0.0002501273) {
        if (input[96] >= 0.07733154) {
            if (input[343] >= 0.000069564165) {
                if (input[342] >= 0.006066567) {
                    var14 = 0.039668314;
                } else {
                    var14 = 0.25352356;
                }
            } else {
                if (input[229] >= 0.00016423433) {
                    var14 = -0.1168053;
                } else {
                    var14 = 0.10156376;
                }
            }
        } else {
            if (input[141] >= 0.14067692) {
                if (input[2] >= 0.27789307) {
                    if (input[226] >= 0.0030278233) {
                        var14 = -0.21974921;
                    } else {
                        var14 = 0.040655524;
                    }
                } else {
                    if (input[145] >= 0.13492003) {
                        if (input[231] >= 0.0012448814) {
                            var14 = -0.0045262934;
                        } else {
                            if (input[247] >= 0.009961085) {
                                var14 = 0.06141428;
                            } else {
                                var14 = 0.26184228;
                            }
                        }
                    } else {
                        var14 = -0.050011028;
                    }
                }
            } else {
                if (input[334] >= 0.020116651) {
                    if (input[96] >= 0.059631348) {
                        if (input[100] >= 0.039855957) {
                            if (input[95] >= 0.09039307) {
                                var14 = -0.051630583;
                            } else {
                                var14 = -0.27636522;
                            }
                        } else {
                            var14 = -0.04394366;
                        }
                    } else {
                        if (input[84] >= 0.07611084) {
                            var14 = -0.16778508;
                        } else {
                            var14 = 0.1433248;
                        }
                    }
                } else {
                    if (input[220] >= 0.0002755872) {
                        if (input[11] >= 0.047607422) {
                            var14 = 0.21066816;
                        } else {
                            var14 = 0.00052038545;
                        }
                    } else {
                        var14 = -0.18774983;
                    }
                }
            }
        }
    } else {
        if (input[321] >= 0.055179715) {
            var14 = -0.07181777;
        } else {
            var14 = -0.28276643;
        }
    }
    double var15;
    var15 = sigmoid(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14);

    const double outArr[] = {1.0 - var15, var15};
    memcpy(output, outArr, 2 * sizeof(double));
}



