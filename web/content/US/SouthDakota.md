---
categories:
- US
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- US
title: SouthDakota, US
chart: true
menu:
  sidebar:
    name: SouthDakota
    parent: US
---

- [State Overview](#state-overview)
- [County List](#county-list)

# Demographics
- Average Age: 48.77 years old
- Population Density: 11.21 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "60407",
               "59990",
               "59016",
               "57056",
               "60737",
               "57427",
               "56862",
               "52477",
               "47126",
               "47405",
               "54298",
               "59203",
               "55477",
               "45674",
               "30908",
               "22631",
               "17331",
               "20264"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.42",
               "49.58"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

# COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-10",
         "2020-03-11",
         "2020-03-12",
         "2020-03-13",
         "2020-03-14",
         "2020-03-15",
         "2020-03-16",
         "2020-03-17",
         "2020-03-18",
         "2020-03-19",
         "2020-03-20",
         "2020-03-21",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               8.0,
               8.0,
               8.0,
               9.0,
               9.0,
               10.0,
               11.0,
               11.0,
               11.0,
               14.0,
               14.0,
               21.0,
               28.0,
               30.0,
               41.0,
               46.0,
               58.0,
               68.0,
               90.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         }
      ]
   }
}
```

> The above plot shows the number of cases and deaths from COVID19. The y-axis using a logarithmic scale. This means each tick is tens times greater than the previous one. A straight line indicates constant exponential growth. We want to see the line flatten out.

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-10",
         "2020-03-11",
         "2020-03-12",
         "2020-03-13",
         "2020-03-14",
         "2020-03-15",
         "2020-03-16",
         "2020-03-17",
         "2020-03-18",
         "2020-03-19",
         "2020-03-20",
         "2020-03-21",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "12.50",
               "0.00",
               "11.11",
               "10.00",
               "0.00",
               "0.00",
               "27.27",
               "0.00",
               "50.00",
               "33.33",
               "7.14",
               "36.67",
               "12.20",
               "26.09",
               "17.24",
               "32.35"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

> The above plot shows the daily increase as a percentage of the day before. A value of 100 means it doubled from the previous day. This value needs to be consistenly below 5 percent to stop the disease from spreading.

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-10",
         "2020-03-11",
         "2020-03-12",
         "2020-03-13",
         "2020-03-14",
         "2020-03-15",
         "2020-03-16",
         "2020-03-17",
         "2020-03-18",
         "2020-03-19",
         "2020-03-20",
         "2020-03-21",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "5.88",
               "inf",
               "6.58",
               "7.27",
               "inf",
               "inf",
               "2.87",
               "inf",
               "1.71",
               "2.41",
               "10.05",
               "2.22",
               "6.02",
               "2.99",
               "4.36",
               "2.47"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```

> The above plot shows how long the disease takes to double. This number needs consistently above 14 to halt the spread of the disease. Holes in the data mean the measurement was the same from the previous day (so it would take forever to double.

# County List

- [Aurora](#aurora)
- [Beadle](#beadle)
- [Bennett](#bennett)
- [BonHomme](#bonhomme)
- [Brookings](#brookings)
- [Brown](#brown)
- [Brule](#brule)
- [Buffalo](#buffalo)
- [Butte](#butte)
- [Campbell](#campbell)
- [CharlesMix](#charlesmix)
- [Clark](#clark)
- [Clay](#clay)
- [Codington](#codington)
- [Corson](#corson)
- [Custer](#custer)
- [Davison](#davison)
- [Day](#day)
- [Deuel](#deuel)
- [Dewey](#dewey)
- [Douglas](#douglas)
- [Edmunds](#edmunds)
- [FallRiver](#fallriver)
- [Faulk](#faulk)
- [Grant](#grant)
- [Gregory](#gregory)
- [Haakon](#haakon)
- [Hamlin](#hamlin)
- [Hand](#hand)
- [Hanson](#hanson)
- [Harding](#harding)
- [Hughes](#hughes)
- [Hutchinson](#hutchinson)
- [Hyde](#hyde)
- [Jackson](#jackson)
- [Jerauld](#jerauld)
- [Jones](#jones)
- [Kingsbury](#kingsbury)
- [Lake](#lake)
- [Lawrence](#lawrence)
- [Lincoln](#lincoln)
- [Lyman](#lyman)
- [Marshall](#marshall)
- [McCook](#mccook)
- [McPherson](#mcpherson)
- [Meade](#meade)
- [Mellette](#mellette)
- [Miner](#miner)
- [Minnehaha](#minnehaha)
- [Moody](#moody)
- [OglalaLakota](#oglalalakota)
- [Pennington](#pennington)
- [Perkins](#perkins)
- [Potter](#potter)
- [Roberts](#roberts)
- [Sanborn](#sanborn)
- [Shannon](#shannon)
- [Spink](#spink)
- [Stanley](#stanley)
- [Sully](#sully)
- [Todd](#todd)
- [Tripp](#tripp)
- [Turner](#turner)
- [Union](#union)
- [Walworth](#walworth)
- [Yankton](#yankton)
- [Ziebach](#ziebach)

## Aurora

### Demographics
   - Average Age: 53.62 years old
   - Population Density: 3.87 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "225",
               "142",
               "223",
               "211",
               "149",
               "160",
               "176",
               "151",
               "122",
               "138",
               "216",
               "155",
               "152",
               "157",
               "130",
               "57",
               "108",
               "87"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.48",
               "47.52"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Beadle

### Demographics
   - Average Age: 50.95 years old
   - Population Density: 14.53 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1399",
               "1520",
               "1311",
               "949",
               "883",
               "1375",
               "1313",
               "866",
               "1044",
               "941",
               "1092",
               "1078",
               "1562",
               "895",
               "646",
               "418",
               "583",
               "499"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.49",
               "48.51"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               10.0,
               12.0,
               13.0,
               13.0,
               14.0,
               16.0,
               16.0,
               20.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "20.00",
               "8.33",
               "0.00",
               "7.69",
               "14.29",
               "0.00",
               "25.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "3.80",
               "8.66",
               "inf",
               "9.35",
               "5.19",
               "inf",
               "3.11"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Bennett

### Demographics
   - Average Age: 37.80 years old
   - Population Density: 2.89 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "270",
               "353",
               "409",
               "288",
               "216",
               "224",
               "202",
               "196",
               "139",
               "172",
               "226",
               "153",
               "193",
               "80",
               "93",
               "136",
               "51",
               "36"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "47.13",
               "52.87"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## BonHomme

### Demographics
   - Average Age: 61.29 years old
   - Population Density: 11.99 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "339",
               "419",
               "317",
               "364",
               "473",
               "488",
               "433",
               "449",
               "351",
               "417",
               "485",
               "481",
               "500",
               "394",
               "289",
               "289",
               "193",
               "288"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "58.42",
               "41.58"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Brookings

### Demographics
   - Average Age: 39.57 years old
   - Population Density: 42.54 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2127",
               "1946",
               "1795",
               "3925",
               "6301",
               "2510",
               "2182",
               "1971",
               "1274",
               "1487",
               "1620",
               "1540",
               "1738",
               "1216",
               "914",
               "782",
               "446",
               "465"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.22",
               "48.78"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Brown

### Demographics
   - Average Age: 50.98 years old
   - Population Density: 22.43 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "2473",
               "2686",
               "2509",
               "2782",
               "2839",
               "2769",
               "2419",
               "2345",
               "1912",
               "2156",
               "2445",
               "2657",
               "2409",
               "2049",
               "1261",
               "1275",
               "791",
               "1063"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.07",
               "50.93"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               1.0,
               1.0,
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "100.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "1.00",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Brule

### Demographics
   - Average Age: 54.85 years old
   - Population Density: 6.21 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "333",
               "357",
               "404",
               "334",
               "273",
               "277",
               "270",
               "337",
               "205",
               "319",
               "356",
               "389",
               "492",
               "355",
               "107",
               "166",
               "113",
               "169"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.43",
               "50.57"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Buffalo

### Demographics
   - Average Age: 31.36 years old
   - Population Density: 4.21 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "233",
               "202",
               "190",
               "222",
               "165",
               "122",
               "122",
               "125",
               "86",
               "107",
               "118",
               "101",
               "88",
               "90",
               "40",
               "23",
               "13",
               "6"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.59",
               "50.41"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Butte

### Demographics
   - Average Age: 56.23 years old
   - Population Density: 4.49 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "625",
               "738",
               "657",
               "671",
               "535",
               "558",
               "627",
               "633",
               "391",
               "516",
               "646",
               "757",
               "846",
               "701",
               "432",
               "326",
               "169",
               "349"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.95",
               "50.05"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Campbell

### Demographics
   - Average Age: 56.32 years old
   - Population Density: 1.86 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "62",
               "101",
               "53",
               "99",
               "40",
               "73",
               "61",
               "68",
               "43",
               "69",
               "154",
               "131",
               "124",
               "107",
               "82",
               "73",
               "61",
               "34"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.47",
               "47.53"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## CharlesMix

### Demographics
   - Average Age: 54.04 years old
   - Population Density: 8.12 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "773",
               "745",
               "809",
               "729",
               "543",
               "450",
               "501",
               "481",
               "416",
               "468",
               "542",
               "666",
               "523",
               "520",
               "308",
               "317",
               "220",
               "333"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.22",
               "49.78"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Clark

### Demographics
   - Average Age: 55.90 years old
   - Population Density: 3.79 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "338",
               "256",
               "223",
               "194",
               "186",
               "241",
               "202",
               "136",
               "191",
               "172",
               "219",
               "227",
               "327",
               "256",
               "149",
               "112",
               "119",
               "125"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.08",
               "48.92"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Clay

### Demographics
   - Average Age: 42.34 years old
   - Population Density: 33.41 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "713",
               "612",
               "714",
               "1877",
               "3048",
               "1127",
               "651",
               "594",
               "594",
               "572",
               "562",
               "557",
               "696",
               "600",
               "326",
               "190",
               "213",
               "279"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.40",
               "50.60"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               2.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Codington

### Demographics
   - Average Age: 52.10 years old
   - Population Density: 39.03 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1784",
               "1971",
               "1853",
               "1658",
               "1775",
               "1924",
               "1709",
               "1808",
               "1462",
               "1652",
               "1855",
               "2144",
               "1782",
               "1374",
               "1013",
               "784",
               "650",
               "795"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.30",
               "49.70"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               2.0,
               4.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "100.00",
               "100.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.00",
               "1.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Corson

### Demographics
   - Average Age: 38.29 years old
   - Population Density: 1.65 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "436",
               "388",
               "466",
               "323",
               "244",
               "273",
               "245",
               "220",
               "210",
               "201",
               "247",
               "244",
               "225",
               "142",
               "124",
               "71",
               "56",
               "53"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.70",
               "49.30"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Custer

### Demographics
   - Average Age: 58.36 years old
   - Population Density: 5.50 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "332",
               "361",
               "372",
               "352",
               "364",
               "292",
               "441",
               "343",
               "414",
               "442",
               "682",
               "830",
               "956",
               "867",
               "678",
               "378",
               "275",
               "194"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.99",
               "50.01"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Davison

### Demographics
   - Average Age: 55.27 years old
   - Population Density: 45.56 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1144",
               "1256",
               "1256",
               "1415",
               "1390",
               "1320",
               "1237",
               "1123",
               "1226",
               "1033",
               "1296",
               "1269",
               "1411",
               "1034",
               "701",
               "557",
               "557",
               "676"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.06",
               "49.94"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "100.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "1.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Day

### Demographics
   - Average Age: 62.54 years old
   - Population Density: 5.05 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "301",
               "392",
               "286",
               "270",
               "325",
               "261",
               "260",
               "268",
               "233",
               "240",
               "400",
               "463",
               "413",
               "443",
               "286",
               "257",
               "184",
               "224"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.89",
               "48.11"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Deuel

### Demographics
   - Average Age: 57.46 years old
   - Population Density: 6.76 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "258",
               "242",
               "330",
               "215",
               "238",
               "198",
               "244",
               "211",
               "245",
               "235",
               "309",
               "305",
               "363",
               "336",
               "156",
               "185",
               "91",
               "145"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.37",
               "47.63"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Dewey

### Demographics
   - Average Age: 33.81 years old
   - Population Density: 2.36 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "706",
               "575",
               "523",
               "459",
               "413",
               "359",
               "340",
               "309",
               "297",
               "288",
               "362",
               "329",
               "267",
               "195",
               "143",
               "114",
               "69",
               "31"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.65",
               "50.35"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Douglas

### Demographics
   - Average Age: 71.46 years old
   - Population Density: 6.75 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "195",
               "174",
               "191",
               "130",
               "169",
               "162",
               "130",
               "101",
               "126",
               "170",
               "185",
               "267",
               "238",
               "179",
               "158",
               "101",
               "75",
               "179"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.36",
               "51.64"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Edmunds

### Demographics
   - Average Age: 57.76 years old
   - Population Density: 3.42 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "252",
               "330",
               "224",
               "223",
               "217",
               "220",
               "198",
               "196",
               "196",
               "184",
               "311",
               "310",
               "292",
               "161",
               "215",
               "132",
               "136",
               "143"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.96",
               "49.04"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## FallRiver

### Demographics
   - Average Age: 62.66 years old
   - Population Density: 3.87 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "307",
               "260",
               "391",
               "358",
               "290",
               "263",
               "270",
               "200",
               "413",
               "429",
               "548",
               "610",
               "638",
               "684",
               "345",
               "368",
               "162",
               "238"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.25",
               "49.75"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Faulk

### Demographics
   - Average Age: 77.87 years old
   - Population Density: 2.31 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "183",
               "139",
               "126",
               "81",
               "145",
               "90",
               "104",
               "111",
               "92",
               "139",
               "166",
               "181",
               "176",
               "201",
               "88",
               "67",
               "61",
               "172"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.17",
               "49.83"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Grant

### Demographics
   - Average Age: 53.81 years old
   - Population Density: 10.49 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "374",
               "524",
               "441",
               "420",
               "398",
               "279",
               "335",
               "510",
               "441",
               "363",
               "546",
               "539",
               "597",
               "417",
               "370",
               "316",
               "159",
               "188"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.04",
               "47.96"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Gregory

### Demographics
   - Average Age: 62.54 years old
   - Population Density: 3.99 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "258",
               "296",
               "274",
               "240",
               "183",
               "186",
               "192",
               "235",
               "218",
               "194",
               "237",
               "312",
               "355",
               "271",
               "229",
               "171",
               "172",
               "178"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.04",
               "48.96"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Haakon

### Demographics
   - Average Age: 63.74 years old
   - Population Density: 1.14 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "96",
               "124",
               "170",
               "124",
               "105",
               "84",
               "111",
               "73",
               "128",
               "73",
               "156",
               "204",
               "133",
               "95",
               "118",
               "101",
               "96",
               "91"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.61",
               "51.39"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Hamlin

### Demographics
   - Average Age: 44.70 years old
   - Population Density: 11.15 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "554",
               "487",
               "543",
               "431",
               "314",
               "359",
               "294",
               "367",
               "272",
               "295",
               "372",
               "413",
               "333",
               "286",
               "228",
               "185",
               "159",
               "108"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.52",
               "48.48"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Hand

### Demographics
   - Average Age: 64.64 years old
   - Population Density: 2.29 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "199",
               "250",
               "165",
               "150",
               "198",
               "171",
               "146",
               "154",
               "168",
               "167",
               "227",
               "284",
               "229",
               "221",
               "115",
               "154",
               "150",
               "153"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.71",
               "49.29"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Hanson

### Demographics
   - Average Age: 41.68 years old
   - Population Density: 7.80 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "282",
               "281",
               "334",
               "275",
               "155",
               "144",
               "169",
               "236",
               "181",
               "199",
               "209",
               "163",
               "269",
               "262",
               "100",
               "54",
               "42",
               "42"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.31",
               "49.69"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Harding

### Demographics
   - Average Age: 43.45 years old
   - Population Density: 0.49 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "70",
               "100",
               "46",
               "101",
               "82",
               "63",
               "98",
               "69",
               "79",
               "105",
               "71",
               "76",
               "118",
               "94",
               "57",
               "40",
               "33",
               "9"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "53.01",
               "46.99"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Hughes

### Demographics
   - Average Age: 51.17 years old
   - Population Density: 22.01 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1264",
               "1448",
               "874",
               "977",
               "896",
               "1202",
               "1332",
               "1242",
               "818",
               "1046",
               "1146",
               "1308",
               "1234",
               "853",
               "716",
               "358",
               "433",
               "470"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.87",
               "51.13"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Hutchinson

### Demographics
   - Average Age: 70.69 years old
   - Population Density: 8.98 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "579",
               "459",
               "477",
               "476",
               "331",
               "334",
               "358",
               "350",
               "381",
               "392",
               "428",
               "586",
               "479",
               "411",
               "317",
               "263",
               "236",
               "458"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.28",
               "50.72"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               2.0,
               2.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Hyde

### Demographics
   - Average Age: 70.48 years old
   - Population Density: 1.54 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "99",
               "74",
               "53",
               "76",
               "43",
               "56",
               "56",
               "64",
               "64",
               "51",
               "106",
               "115",
               "128",
               "68",
               "77",
               "57",
               "72",
               "72"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.04",
               "49.96"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Jackson

### Demographics
   - Average Age: 43.90 years old
   - Population Density: 1.76 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "373",
               "242",
               "286",
               "242",
               "275",
               "184",
               "188",
               "147",
               "138",
               "159",
               "194",
               "223",
               "169",
               "133",
               "142",
               "86",
               "39",
               "67"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.01",
               "50.99"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Jerauld

### Demographics
   - Average Age: 67.95 years old
   - Population Density: 3.81 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "101",
               "161",
               "121",
               "98",
               "55",
               "61",
               "111",
               "114",
               "83",
               "100",
               "81",
               "226",
               "169",
               "100",
               "157",
               "83",
               "109",
               "99"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.09",
               "50.91"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Jones

### Demographics
   - Average Age: 59.31 years old
   - Population Density: 0.76 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "12",
               "41",
               "29",
               "22",
               "27",
               "26",
               "32",
               "27",
               "29",
               "34",
               "61",
               "114",
               "101",
               "42",
               "28",
               "53",
               "42",
               "15"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.52",
               "50.48"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Kingsbury

### Demographics
   - Average Age: 64.82 years old
   - Population Density: 5.75 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "312",
               "324",
               "278",
               "277",
               "235",
               "220",
               "287",
               "314",
               "204",
               "245",
               "349",
               "371",
               "440",
               "335",
               "236",
               "173",
               "129",
               "238"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.08",
               "48.92"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Lake

### Demographics
   - Average Age: 52.23 years old
   - Population Density: 21.86 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "770",
               "554",
               "862",
               "908",
               "889",
               "555",
               "699",
               "746",
               "488",
               "593",
               "788",
               "1032",
               "1157",
               "985",
               "669",
               "371",
               "211",
               "297"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.24",
               "47.76"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Lawrence

### Demographics
   - Average Age: 53.49 years old
   - Population Density: 31.53 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1090",
               "1280",
               "1351",
               "1764",
               "2261",
               "1541",
               "1458",
               "1203",
               "1401",
               "1261",
               "1541",
               "2200",
               "1804",
               "1908",
               "1016",
               "893",
               "608",
               "654"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.91",
               "50.09"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               2.0,
               2.0,
               3.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "50.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.71"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Lincoln

### Demographics
   - Average Age: 41.93 years old
   - Population Density: 94.90 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "4252",
               "4726",
               "4465",
               "3282",
               "2989",
               "3721",
               "4397",
               "4149",
               "4135",
               "3339",
               "3173",
               "3452",
               "2441",
               "1951",
               "1968",
               "918",
               "738",
               "818"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.44",
               "50.56"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               1.0,
               2.0,
               2.0,
               3.0,
               4.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "100.00",
               "0.00",
               "50.00",
               "33.33"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "1.00",
               "inf",
               "1.71",
               "2.41"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Lyman

### Demographics
   - Average Age: 47.67 years old
   - Population Density: 2.27 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "334",
               "306",
               "288",
               "277",
               "264",
               "194",
               "232",
               "250",
               "206",
               "159",
               "228",
               "250",
               "288",
               "214",
               "111",
               "115",
               "62",
               "91"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.13",
               "47.87"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Marshall

### Demographics
   - Average Age: 51.65 years old
   - Population Density: 5.53 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "458",
               "318",
               "329",
               "332",
               "188",
               "259",
               "324",
               "264",
               "197",
               "225",
               "303",
               "341",
               "378",
               "294",
               "256",
               "176",
               "125",
               "128"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.62",
               "48.38"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## McCook

### Demographics
   - Average Age: 56.96 years old
   - Population Density: 9.55 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "413",
               "461",
               "382",
               "348",
               "292",
               "257",
               "303",
               "299",
               "315",
               "298",
               "347",
               "380",
               "385",
               "332",
               "191",
               "175",
               "121",
               "212"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.28",
               "49.72"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "100.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "1.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## McPherson

### Demographics
   - Average Age: 85.06 years old
   - Population Density: 2.05 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "156",
               "119",
               "140",
               "111",
               "85",
               "89",
               "134",
               "99",
               "143",
               "107",
               "132",
               "231",
               "126",
               "138",
               "133",
               "125",
               "95",
               "201"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.42",
               "49.58"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Meade

### Demographics
   - Average Age: 45.29 years old
   - Population Density: 7.87 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1644",
               "1905",
               "2032",
               "1546",
               "2404",
               "1855",
               "1963",
               "1618",
               "1781",
               "1523",
               "1645",
               "1851",
               "1787",
               "1553",
               "841",
               "609",
               "393",
               "474"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.32",
               "47.68"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Mellette

### Demographics
   - Average Age: 44.45 years old
   - Population Density: 1.57 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "150",
               "252",
               "188",
               "99",
               "114",
               "107",
               "173",
               "90",
               "63",
               "129",
               "121",
               "139",
               "124",
               "93",
               "84",
               "71",
               "19",
               "39"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.93",
               "50.07"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Miner

### Demographics
   - Average Age: 63.09 years old
   - Population Density: 3.90 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "135",
               "187",
               "158",
               "102",
               "95",
               "72",
               "160",
               "120",
               "110",
               "95",
               "173",
               "188",
               "164",
               "107",
               "107",
               "86",
               "67",
               "103"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.68",
               "48.32"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Minnehaha

### Demographics
   - Average Age: 44.42 years old
   - Population Density: 229.49 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "14489",
               "12890",
               "12898",
               "11525",
               "12527",
               "15012",
               "14792",
               "12911",
               "11003",
               "10982",
               "11845",
               "12118",
               "10546",
               "8611",
               "5134",
               "3388",
               "2713",
               "3365"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.38",
               "49.62"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               5.0,
               5.0,
               5.0,
               13.0,
               16.0,
               18.0,
               21.0,
               25.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "160.00",
               "23.08",
               "12.50",
               "16.67",
               "19.05"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "0.73",
               "3.34",
               "5.88",
               "4.50",
               "3.98"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Moody

### Demographics
   - Average Age: 48.33 years old
   - Population Density: 12.48 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "437",
               "492",
               "451",
               "395",
               "306",
               "382",
               "357",
               "398",
               "261",
               "402",
               "467",
               "562",
               "426",
               "355",
               "263",
               "295",
               "136",
               "121"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.75",
               "49.25"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## OglalaLakota

### Demographics
   - Average Age: 30.94 years old
   - Population Density: 0.00 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1477",
               "1420",
               "1632",
               "1310",
               "1277",
               "1128",
               "943",
               "901",
               "636",
               "718",
               "786",
               "637",
               "493",
               "420",
               "182",
               "232",
               "83",
               "60"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "48.75",
               "51.25"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Pennington

### Demographics
   - Average Age: 48.42 years old
   - Population Density: 39.25 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "7316",
               "7331",
               "6896",
               "6573",
               "6749",
               "7734",
               "7374",
               "6303",
               "6337",
               "5920",
               "6887",
               "8017",
               "7578",
               "6343",
               "4597",
               "2869",
               "2228",
               "2242"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.31",
               "49.69"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               3.0,
               3.0,
               4.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "200.00",
               "0.00",
               "33.33"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "0.63",
               "inf",
               "2.41"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Perkins

### Demographics
   - Average Age: 61.61 years old
   - Population Density: 1.01 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "186",
               "171",
               "153",
               "166",
               "177",
               "127",
               "123",
               "203",
               "104",
               "114",
               "206",
               "291",
               "222",
               "151",
               "164",
               "128",
               "105",
               "116"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.71",
               "49.29"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Potter

### Demographics
   - Average Age: 70.73 years old
   - Population Density: 2.59 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "175",
               "128",
               "126",
               "126",
               "94",
               "115",
               "99",
               "114",
               "66",
               "96",
               "141",
               "196",
               "202",
               "203",
               "130",
               "74",
               "110",
               "131"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.69",
               "49.31"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Roberts

### Demographics
   - Average Age: 49.20 years old
   - Population Density: 9.06 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "801",
               "787",
               "749",
               "663",
               "727",
               "533",
               "485",
               "538",
               "457",
               "557",
               "672",
               "685",
               "668",
               "683",
               "426",
               "332",
               "289",
               "233"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.43",
               "48.57"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Sanborn

### Demographics
   - Average Age: 56.47 years old
   - Population Density: 4.19 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "180",
               "150",
               "117",
               "93",
               "187",
               "144",
               "137",
               "141",
               "116",
               "112",
               "161",
               "180",
               "221",
               "179",
               "71",
               "68",
               "50",
               "81"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.63",
               "48.37"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Shannon

### Demographics
Demographics Unavailable

### COVID19
COVID19 Data Not Available
## Spink

### Demographics
   - Average Age: 58.03 years old
   - Population Density: 4.33 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "401",
               "392",
               "454",
               "511",
               "321",
               "324",
               "360",
               "335",
               "301",
               "337",
               "435",
               "570",
               "479",
               "390",
               "240",
               "254",
               "200",
               "239"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.13",
               "49.87"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Stanley

### Demographics
   - Average Age: 45.20 years old
   - Population Density: 1.98 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "224",
               "227",
               "218",
               "126",
               "122",
               "167",
               "161",
               "223",
               "150",
               "225",
               "160",
               "175",
               "270",
               "178",
               "197",
               "66",
               "73",
               "35"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.69",
               "48.31"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Sully

### Demographics
   - Average Age: 53.48 years old
   - Population Density: 1.24 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "54",
               "75",
               "133",
               "89",
               "69",
               "34",
               "56",
               "63",
               "79",
               "99",
               "111",
               "74",
               "96",
               "95",
               "63",
               "45",
               "64",
               "32"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "52.44",
               "47.56"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Todd

### Demographics
   - Average Age: 31.74 years old
   - Population Density: 7.29 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1251",
               "1148",
               "1071",
               "936",
               "781",
               "752",
               "620",
               "546",
               "531",
               "478",
               "451",
               "397",
               "423",
               "313",
               "173",
               "108",
               "96",
               "71"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.07",
               "50.93"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Tripp

### Demographics
   - Average Age: 57.91 years old
   - Population Density: 3.38 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "353",
               "264",
               "419",
               "334",
               "238",
               "262",
               "252",
               "362",
               "170",
               "323",
               "456",
               "450",
               "379",
               "337",
               "241",
               "338",
               "106",
               "184"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.73",
               "50.27"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Turner

### Demographics
   - Average Age: 59.05 years old
   - Population Density: 13.38 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "503",
               "505",
               "632",
               "477",
               "366",
               "400",
               "465",
               "584",
               "383",
               "474",
               "547",
               "608",
               "643",
               "515",
               "333",
               "277",
               "235",
               "317"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.07",
               "49.93"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Union

### Demographics
   - Average Age: 51.44 years old
   - Population Density: 32.49 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "870",
               "947",
               "1174",
               "1005",
               "754",
               "836",
               "952",
               "920",
               "1004",
               "977",
               "1083",
               "1135",
               "961",
               "893",
               "605",
               "311",
               "359",
               "391"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "50.69",
               "49.31"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               1.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Walworth

### Demographics
   - Average Age: 59.94 years old
   - Population Density: 7.40 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "349",
               "434",
               "296",
               "338",
               "207",
               "285",
               "288",
               "331",
               "338",
               "222",
               "337",
               "397",
               "399",
               "370",
               "264",
               "222",
               "221",
               "212"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.47",
               "50.53"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Yankton

### Demographics
   - Average Age: 53.04 years old
   - Population Density: 42.65 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "1360",
               "1297",
               "1392",
               "1301",
               "1530",
               "1302",
               "1337",
               "1418",
               "1269",
               "1527",
               "1688",
               "1682",
               "1536",
               "1350",
               "816",
               "759",
               "536",
               "617"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "51.53",
               "48.47"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               4.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "300.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "0.50"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Ziebach

### Demographics
   - Average Age: 37.68 years old
   - Population Density: 1.43 people per square mile

```chart
{
   "type": "bar",
   "options": {},
   "data": {
      "labels": [
         "0 to 4",
         "5 to 9",
         "10 to 14",
         "15 to 19",
         "20 to 24",
         "25 to 29",
         "30 to 34",
         "35 to 39",
         "40 to 44",
         "45 to 49",
         "50 to 54",
         "55 to 59",
         "60 to 64",
         "65 to 69",
         "70 to 74",
         "75 to 79",
         "80 to 84",
         "85 and over"
      ],
      "datasets": [
         {
            "label": "Age Bracket",
            "data": [
               "198",
               "248",
               "287",
               "281",
               "206",
               "135",
               "172",
               "204",
               "196",
               "143",
               "189",
               "187",
               "116",
               "89",
               "59",
               "54",
               "21",
               "29"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "pie",
   "options": {},
   "data": {
      "labels": [
         "male",
         "female"
      ],
      "datasets": [
         {
            "backgroundColor": [
               "rgba(0,0,255,255)",
               "rgba(255,0,0,255)"
            ],
            "data": [
               "49.68",
               "50.32"
            ]
         },
         {
            "label": "Gender Share",
            "data": []
         }
      ]
   }
}
```

### COVID19

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic"
            }
         ]
      },
      "title": {
         "display": true,
         "text": "COVID19 Cases (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "logarithmic",
               "ticks": {
                  "min": 0,
                  "max": 1000
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Percent Daily Increase (Log Scale)"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00"
            ]
         }
      ]
   }
}
```

```chart
{
   "type": "line",
   "options": {
      "scales": {
         "yAxes": [
            {
               "display": true,
               "type": "linear",
               "ticks": {
                  "min": 0
               }
            }
         ]
      },
      "title": {
         "display": true,
         "text": "Days to Double"
      }
   },
   "data": {
      "labels": [
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
