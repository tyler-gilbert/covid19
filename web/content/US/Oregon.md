---
categories:
- US
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- US
title: Oregon, US
chart: true
menu:
  sidebar:
    name: Oregon
    parent: US
---

- [State Overview](#state-overview)
- [County List](#county-list)

# Demographics
- Average Age: 48.86 years old
- Population Density: 41.49 people per square mile

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
               "231927",
               "242619",
               "245569",
               "246092",
               "265043",
               "286593",
               "285860",
               "280150",
               "257619",
               "257594",
               "256516",
               "266912",
               "276903",
               "242523",
               "169453",
               "113094",
               "74214",
               "83262"
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
               "49.56",
               "50.44"
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
         "2020-02-29",
         "2020-03-01",
         "2020-03-02",
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               1.0,
               1.0,
               3.0,
               3.0,
               3.0,
               3.0,
               3.0,
               6.0,
               14.0,
               14.0,
               15.0,
               19.0,
               24.0,
               30.0,
               32.0,
               36.0,
               39.0,
               66.0,
               68.0,
               88.0,
               114.0,
               114.0,
               161.0,
               191.0,
               210.0,
               266.0,
               316.0,
               416.0,
               479.0,
               548.0
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
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
               1.0,
               2.0,
               3.0,
               3.0,
               5.0,
               5.0,
               5.0,
               8.0,
               10.0,
               11.0,
               12.0,
               13.0,
               13.0
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
         "2020-02-29",
         "2020-03-01",
         "2020-03-02",
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "200.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "100.00",
               "133.33",
               "0.00",
               "7.14",
               "26.67",
               "26.32",
               "25.00",
               "6.67",
               "12.50",
               "8.33",
               "69.23",
               "3.03",
               "29.41",
               "29.55",
               "0.00",
               "41.23",
               "18.63",
               "9.95",
               "26.67",
               "18.80",
               "31.65",
               "15.14",
               "14.41"
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
               "100.00",
               "50.00",
               "0.00",
               "66.67",
               "0.00",
               "0.00",
               "60.00",
               "25.00",
               "10.00",
               "9.09",
               "8.33",
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
         "2020-02-29",
         "2020-03-01",
         "2020-03-02",
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "0.63",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.00",
               "0.82",
               "inf",
               "10.05",
               "2.93",
               "2.97",
               "3.11",
               "10.74",
               "5.88",
               "8.66",
               "1.32",
               "23.22",
               "2.69",
               "2.68",
               "inf",
               "2.01",
               "4.06",
               "7.31",
               "2.93",
               "4.02",
               "2.52",
               "4.92",
               "5.15"
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
               "1.00",
               "1.71",
               "inf",
               "1.36",
               "inf",
               "inf",
               "1.47",
               "3.11",
               "7.27",
               "7.97",
               "8.66",
               "inf"
            ]
         }
      ]
   }
}
```

> The above plot shows how long the disease takes to double. This number needs consistently above 14 to halt the spread of the disease. Holes in the data mean the measurement was the same from the previous day (so it would take forever to double.

# County List

- [Baker](#baker)
- [Benton](#benton)
- [Clackamas](#clackamas)
- [Clatsop](#clatsop)
- [Columbia](#columbia)
- [Coos](#coos)
- [Crook](#crook)
- [Curry](#curry)
- [Deschutes](#deschutes)
- [Douglas](#douglas)
- [Gilliam](#gilliam)
- [Grant](#grant)
- [Harney](#harney)
- [HoodRiver](#hoodriver)
- [Jackson](#jackson)
- [Jefferson](#jefferson)
- [Josephine](#josephine)
- [Klamath](#klamath)
- [Lake](#lake)
- [Lane](#lane)
- [Lincoln](#lincoln)
- [Linn](#linn)
- [Malheur](#malheur)
- [Marion](#marion)
- [Morrow](#morrow)
- [Multnomah](#multnomah)
- [Polk](#polk)
- [Portland](#portland)
- [Sherman](#sherman)
- [Tillamook](#tillamook)
- [Umatilla](#umatilla)
- [Union](#union)
- [Wallowa](#wallowa)
- [Wasco](#wasco)
- [Washington](#washington)
- [Wheeler](#wheeler)
- [Yamhill](#yamhill)

## Baker

### Demographics
   - Average Age: 57.08 years old
   - Population Density: 5.18 people per square mile

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
               "802",
               "968",
               "787",
               "769",
               "751",
               "867",
               "972",
               "784",
               "863",
               "826",
               "971",
               "1270",
               "1280",
               "1379",
               "952",
               "760",
               "540",
               "443"
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
               "51.50",
               "48.50"
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
## Benton

### Demographics
   - Average Age: 46.49 years old
   - Population Density: 132.22 people per square mile

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
               "3664",
               "3895",
               "4461",
               "8715",
               "14681",
               "6637",
               "5082",
               "5016",
               "3947",
               "4369",
               "4777",
               "5549",
               "5414",
               "4496",
               "3619",
               "2106",
               "1578",
               "1774"
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
               "50.48",
               "49.52"
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
               4.0,
               4.0,
               4.0,
               6.0,
               6.0,
               6.0,
               8.0,
               8.0
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
               "50.00",
               "0.00",
               "0.00",
               "33.33",
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
               "1.71",
               "inf",
               "inf",
               "2.41",
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
## Clackamas

### Demographics
   - Average Age: 49.37 years old
   - Population Density: 215.94 people per square mile

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
               "22028",
               "23399",
               "27002",
               "25370",
               "22508",
               "24270",
               "24830",
               "26399",
               "26196",
               "27634",
               "28503",
               "29290",
               "29278",
               "24821",
               "17492",
               "11045",
               "7643",
               "8080"
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
               "49.23",
               "50.77"
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
               12.0,
               14.0,
               17.0,
               21.0,
               21.0,
               31.0,
               36.0,
               39.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0
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
               "16.67",
               "21.43",
               "23.53",
               "0.00",
               "47.62",
               "16.13",
               "8.33"
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
               "100.00",
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
               "4.50",
               "3.57",
               "3.28",
               "inf",
               "1.78",
               "4.64",
               "8.66"
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
               "1.00",
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
## Clatsop

### Demographics
   - Average Age: 51.77 years old
   - Population Density: 35.55 people per square mile

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
               "2045",
               "1810",
               "2326",
               "2210",
               "2236",
               "2316",
               "2223",
               "2454",
               "2076",
               "2084",
               "2532",
               "3014",
               "3221",
               "3116",
               "1949",
               "1454",
               "696",
               "800"
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
               "49.70",
               "50.30"
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
               2.0,
               2.0,
               3.0,
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
               "100.00",
               "0.00",
               "50.00",
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
               "1.00",
               "inf",
               "1.71",
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
## Columbia

### Demographics
   - Average Age: 50.40 years old
   - Population Density: 73.87 people per square mile

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
               "2614",
               "3344",
               "2856",
               "3363",
               "2544",
               "2694",
               "2802",
               "3480",
               "2825",
               "3563",
               "3672",
               "3344",
               "4653",
               "3492",
               "2158",
               "1549",
               "866",
               "1032"
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
               "50.16",
               "49.84"
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
## Coos

### Demographics
   - Average Age: 57.56 years old
   - Population Density: 35.05 people per square mile

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
               "3105",
               "3023",
               "3546",
               "3434",
               "3102",
               "3351",
               "3306",
               "3512",
               "2978",
               "3427",
               "4273",
               "4506",
               "5900",
               "4977",
               "4203",
               "2870",
               "2010",
               "1785"
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
               "49.03",
               "50.97"
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
## Crook

### Demographics
   - Average Age: 52.63 years old
   - Population Density: 7.48 people per square mile

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
               "1092",
               "1318",
               "1191",
               "1168",
               "926",
               "1346",
               "1025",
               "1340",
               "1125",
               "1202",
               "1475",
               "1799",
               "1840",
               "2029",
               "1371",
               "1034",
               "637",
               "419"
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
## Curry

### Demographics
   - Average Age: 69.40 years old
   - Population Density: 11.32 people per square mile

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
               "908",
               "943",
               "903",
               "753",
               "849",
               "1113",
               "902",
               "962",
               "1110",
               "1095",
               "1431",
               "1754",
               "2345",
               "2499",
               "1947",
               "1367",
               "643",
               "983"
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
               "49.06",
               "50.94"
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
## Deschutes

### Demographics
   - Average Age: 50.40 years old
   - Population Density: 59.13 people per square mile

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
               "9374",
               "10354",
               "11306",
               "9987",
               "9004",
               "11138",
               "12044",
               "11169",
               "12569",
               "11815",
               "11201",
               "12441",
               "13736",
               "12498",
               "9592",
               "5621",
               "3172",
               "3619"
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
               "49.38",
               "50.62"
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
               10.0,
               10.0,
               10.0,
               15.0,
               18.0,
               20.0,
               23.0
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
               "50.00",
               "20.00",
               "11.11",
               "15.00"
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
               "1.71",
               "3.80",
               "6.58",
               "4.96"
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
   - Average Age: 57.25 years old
   - Population Density: 21.10 people per square mile

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
               "5581",
               "5770",
               "5908",
               "5900",
               "5300",
               "6024",
               "5739",
               "5518",
               "5635",
               "6230",
               "6930",
               "7713",
               "9404",
               "8937",
               "6361",
               "4719",
               "3542",
               "3112"
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
               "49.36",
               "50.64"
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
         "2020-03-08",
         "2020-03-09",
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
               4.0,
               4.0,
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
         "2020-03-08",
         "2020-03-09",
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
               "33.33",
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
         "2020-03-08",
         "2020-03-09",
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
               "2.41",
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
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Gilliam

### Demographics
   - Average Age: 61.59 years old
   - Population Density: 1.56 people per square mile

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
               "85",
               "138",
               "110",
               "75",
               "51",
               "80",
               "121",
               "86",
               "98",
               "112",
               "150",
               "121",
               "195",
               "136",
               "134",
               "97",
               "50",
               "68"
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
               "47.82",
               "52.18"
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
## Grant

### Demographics
   - Average Age: 62.10 years old
   - Population Density: 1.59 people per square mile

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
               "327",
               "500",
               "233",
               "365",
               "263",
               "335",
               "342",
               "346",
               "367",
               "343",
               "454",
               "563",
               "711",
               "561",
               "577",
               "384",
               "268",
               "244"
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
               "50.55",
               "49.45"
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
## Harney

### Demographics
   - Average Age: 51.64 years old
   - Population Density: 0.71 people per square mile

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
               "372",
               "434",
               "406",
               "411",
               "350",
               "355",
               "378",
               "391",
               "444",
               "382",
               "469",
               "537",
               "604",
               "498",
               "495",
               "342",
               "230",
               "130"
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
               "50.59",
               "49.41"
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
## HoodRiver

### Demographics
   - Average Age: 46.99 years old
   - Population Density: 43.35 people per square mile

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
               "1482",
               "1341",
               "1817",
               "1638",
               "1303",
               "1390",
               "1440",
               "1442",
               "1579",
               "1591",
               "1602",
               "1506",
               "1540",
               "1271",
               "799",
               "586",
               "370",
               "434"
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
               "49.84",
               "50.16"
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
               "inf",
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
## Jackson

### Demographics
   - Average Age: 54.65 years old
   - Population Density: 76.47 people per square mile

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
               "11868",
               "12647",
               "12628",
               "12096",
               "12126",
               "13600",
               "13161",
               "12389",
               "12196",
               "12349",
               "13199",
               "14385",
               "16548",
               "15243",
               "11436",
               "7643",
               "4699",
               "6054"
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
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               3.0,
               4.0,
               4.0,
               6.0,
               8.0,
               19.0
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
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "50.00",
               "33.33",
               "0.00",
               "50.00",
               "33.33",
               "137.50"
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
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "1.71",
               "2.41",
               "inf",
               "1.71",
               "2.41",
               "0.80"
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
               "inf"
            ]
         }
      ]
   }
}
```
## Jefferson

### Demographics
   - Average Age: 49.38 years old
   - Population Density: 12.92 people per square mile

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
               "1454",
               "1649",
               "1465",
               "1450",
               "1309",
               "1477",
               "1301",
               "1333",
               "1223",
               "1463",
               "1522",
               "1546",
               "1676",
               "1550",
               "1128",
               "733",
               "380",
               "484"
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
## Josephine

### Demographics
   - Average Age: 55.95 years old
   - Population Density: 52.07 people per square mile

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
               "4236",
               "4597",
               "4922",
               "4659",
               "4061",
               "4426",
               "4183",
               "4270",
               "4732",
               "4918",
               "5289",
               "6382",
               "7187",
               "7427",
               "5144",
               "4326",
               "2550",
               "2172"
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
               "49.12",
               "50.88"
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
               4.0,
               4.0,
               5.0,
               6.0
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
               "100.00",
               "0.00",
               "25.00",
               "20.00"
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
               "1.00",
               "inf",
               "3.11",
               "3.80"
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
## Klamath

### Demographics
   - Average Age: 52.07 years old
   - Population Density: 10.81 people per square mile

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
               "4085",
               "4234",
               "3728",
               "4019",
               "3899",
               "4282",
               "3809",
               "3269",
               "3886",
               "3865",
               "4148",
               "4505",
               "5213",
               "4491",
               "3641",
               "2110",
               "1530",
               "1596"
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
               "49.98",
               "50.02"
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
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               1.0,
               2.0,
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
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "0.00",
               "100.00",
               "0.00",
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
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "inf",
               "1.00",
               "inf",
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
   - Average Age: 56.22 years old
   - Population Density: 0.94 people per square mile

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
               "409",
               "471",
               "379",
               "315",
               "378",
               "404",
               "472",
               "376",
               "427",
               "435",
               "549",
               "644",
               "681",
               "666",
               "497",
               "352",
               "185",
               "203"
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
               "53.45",
               "46.55"
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
## Lane

### Demographics
   - Average Age: 50.69 years old
   - Population Density: 78.12 people per square mile

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
               "18377",
               "19167",
               "19443",
               "24269",
               "35660",
               "24711",
               "22728",
               "22886",
               "20634",
               "20862",
               "22007",
               "24755",
               "25943",
               "24025",
               "16497",
               "10748",
               "7713",
               "8457"
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
               "49.30",
               "50.70"
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
               4.0,
               4.0,
               4.0,
               5.0,
               7.0,
               10.0,
               9.0,
               10.0
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
               "25.00",
               "40.00",
               "42.86",
               "-10.00",
               "11.11"
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
               "3.11",
               "2.06",
               "1.94",
               "-6.58",
               "6.58"
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
   - Average Age: 58.24 years old
   - Population Density: 40.11 people per square mile

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
               "2281",
               "2365",
               "2201",
               "2142",
               "2058",
               "2322",
               "2408",
               "2215",
               "2411",
               "2637",
               "3105",
               "4062",
               "4722",
               "4880",
               "3338",
               "2128",
               "1342",
               "1264"
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
               "48.14",
               "51.86"
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
## Linn

### Demographics
   - Average Age: 50.42 years old
   - Population Density: 53.21 people per square mile

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
               "7423",
               "7939",
               "7812",
               "7515",
               "7083",
               "8372",
               "7748",
               "8105",
               "6530",
               "7586",
               "7753",
               "8746",
               "8207",
               "7798",
               "5349",
               "3675",
               "2379",
               "2850"
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
               "49.34",
               "50.66"
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
               19.0,
               20.0,
               21.0,
               25.0,
               26.0,
               28.0,
               32.0,
               36.0
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
               "5.26",
               "5.00",
               "19.05",
               "4.00",
               "7.69",
               "14.29",
               "12.50"
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
               "13.51",
               "14.21",
               "3.98",
               "17.67",
               "9.35",
               "5.19",
               "5.88"
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
## Malheur

### Demographics
   - Average Age: 48.69 years old
   - Population Density: 3.06 people per square mile

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
               "2086",
               "2270",
               "2142",
               "2025",
               "2192",
               "2116",
               "2007",
               "1976",
               "1677",
               "1780",
               "1709",
               "1696",
               "1854",
               "1782",
               "984",
               "731",
               "660",
               "744"
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
               "54.49",
               "45.51"
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
## Marion

### Demographics
   - Average Age: 45.95 years old
   - Population Density: 280.75 people per square mile

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
               "22711",
               "23570",
               "23820",
               "22783",
               "22752",
               "23636",
               "22437",
               "21957",
               "20296",
               "20158",
               "20337",
               "19734",
               "21094",
               "17547",
               "11948",
               "8785",
               "5731",
               "6257"
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
               "49.87",
               "50.13"
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
         "2020-03-08",
         "2020-03-09",
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
               22.0,
               30.0,
               32.0,
               43.0,
               57.0,
               83.0,
               94.0,
               109.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               0.0,
               0.0,
               1.0,
               1.0,
               1.0,
               2.0,
               2.0,
               3.0,
               3.0,
               3.0
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
         "2020-03-08",
         "2020-03-09",
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
               "2100.00",
               "36.36",
               "6.67",
               "34.38",
               "32.56",
               "45.61",
               "13.25",
               "15.96"
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
               "100.00",
               "0.00",
               "50.00",
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
         "2020-03-08",
         "2020-03-09",
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
               "0.22",
               "2.23",
               "10.74",
               "2.35",
               "2.46",
               "1.84",
               "5.57",
               "4.68"
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
               "1.00",
               "inf",
               "1.71",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Morrow

### Demographics
   - Average Age: 46.63 years old
   - Population Density: 5.47 people per square mile

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
               "873",
               "806",
               "916",
               "848",
               "692",
               "566",
               "581",
               "562",
               "776",
               "728",
               "593",
               "837",
               "775",
               "471",
               "559",
               "249",
               "156",
               "227"
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
               "50.67",
               "49.33"
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
## Multnomah

### Demographics
   - Average Age: 45.24 years old
   - Population Density: 1714.94 people per square mile

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
               "45393",
               "44641",
               "40510",
               "40095",
               "48822",
               "73540",
               "75873",
               "71313",
               "58749",
               "55184",
               "49198",
               "47821",
               "46745",
               "38171",
               "24658",
               "15576",
               "9712",
               "12646"
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
               "49.54",
               "50.46"
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
               19.0,
               21.0,
               25.0,
               33.0,
               45.0,
               67.0,
               81.0,
               91.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               1.0,
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0
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
               "10.53",
               "19.05",
               "32.00",
               "36.36",
               "48.89",
               "20.90",
               "12.35"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "100.00",
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
               "6.93",
               "3.98",
               "2.50",
               "2.23",
               "1.74",
               "3.65",
               "5.95"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "1.00",
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
## Polk

### Demographics
   - Average Age: 49.83 years old
   - Population Density: 109.41 people per square mile

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
               "4658",
               "5212",
               "5617",
               "6321",
               "7424",
               "4659",
               "4770",
               "4710",
               "4601",
               "4656",
               "4701",
               "4897",
               "5206",
               "4759",
               "3459",
               "2072",
               "1683",
               "2022"
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
               "48.59",
               "51.41"
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
               3.0,
               3.0,
               3.0,
               6.0,
               10.0,
               11.0,
               13.0
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
               "200.00",
               "0.00",
               "0.00",
               "100.00",
               "66.67",
               "10.00",
               "18.18"
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
               "0.63",
               "inf",
               "inf",
               "1.00",
               "1.36",
               "7.27",
               "4.15"
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
## Portland

### Demographics
Demographics Unavailable

### COVID19
COVID19 Data Not Available
## Sherman

### Demographics
   - Average Age: 53.11 years old
   - Population Density: 1.93 people per square mile

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
               "65",
               "83",
               "54",
               "109",
               "56",
               "85",
               "53",
               "104",
               "97",
               "71",
               "141",
               "167",
               "108",
               "129",
               "86",
               "101",
               "71",
               "25"
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
               "54.27",
               "45.73"
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
## Tillamook

### Demographics
   - Average Age: 58.71 years old
   - Population Density: 19.56 people per square mile

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
               "1222",
               "1373",
               "1549",
               "1272",
               "1203",
               "1403",
               "1416",
               "1381",
               "1280",
               "1525",
               "1614",
               "1850",
               "2616",
               "2343",
               "1583",
               "987",
               "646",
               "813"
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
               "50.39",
               "49.61"
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
               1.0,
               1.0,
               1.0,
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
               "inf",
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
## Umatilla

### Demographics
   - Average Age: 46.23 years old
   - Population Density: 23.80 people per square mile

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
               "5240",
               "5574",
               "5589",
               "5180",
               "5132",
               "5466",
               "4996",
               "4982",
               "4625",
               "4698",
               "4600",
               "4637",
               "4725",
               "3689",
               "2867",
               "2142",
               "1258",
               "1498"
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
               "52.16",
               "47.84"
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
         "2020-03-02",
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               3.0,
               4.0,
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
               0.0,
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
         "2020-03-02",
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "0.00",
               "100.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "50.00",
               "33.33",
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
         "2020-03-02",
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "inf",
               "1.00",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.71",
               "2.41",
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
## Union

### Demographics
   - Average Age: 49.06 years old
   - Population Density: 12.77 people per square mile

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
               "1574",
               "1613",
               "1601",
               "1764",
               "2159",
               "1439",
               "1573",
               "1398",
               "1443",
               "1250",
               "1543",
               "1805",
               "1823",
               "1629",
               "1269",
               "1017",
               "611",
               "517"
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
               "49.60",
               "50.40"
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
## Wallowa

### Demographics
   - Average Age: 64.60 years old
   - Population Density: 2.20 people per square mile

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
               "326",
               "395",
               "366",
               "259",
               "153",
               "386",
               "381",
               "311",
               "334",
               "327",
               "448",
               "599",
               "713",
               "737",
               "360",
               "304",
               "254",
               "271"
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
               "49.13",
               "50.87"
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
## Wasco

### Demographics
   - Average Age: 52.80 years old
   - Population Density: 10.80 people per square mile

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
               "1635",
               "1639",
               "1637",
               "1408",
               "1494",
               "1679",
               "1505",
               "1669",
               "1290",
               "1418",
               "1560",
               "1825",
               "1946",
               "1821",
               "1193",
               "879",
               "588",
               "680"
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
               "49.94",
               "50.06"
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
               1.0,
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
               "100.00",
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
               "1.00",
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
## Washington

### Demographics
   - Average Age: 44.47 years old
   - Population Density: 800.93 people per square mile

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
               "36491",
               "38373",
               "39488",
               "35771",
               "35105",
               "43740",
               "46632",
               "45109",
               "42301",
               "40560",
               "37386",
               "35471",
               "32350",
               "26792",
               "17483",
               "11470",
               "7906",
               "9393"
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
               "49.42",
               "50.58"
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
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               2.0,
               2.0,
               2.0,
               2.0,
               3.0,
               8.0,
               8.0,
               55.0,
               69.0,
               76.0,
               96.0,
               104.0,
               122.0,
               140.0,
               154.0
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
               1.0,
               1.0,
               2.0,
               2.0,
               3.0,
               3.0,
               3.0,
               3.0
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
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "50.00",
               "166.67",
               "0.00",
               "587.50",
               "25.45",
               "10.14",
               "26.32",
               "8.33",
               "17.31",
               "14.75",
               "10.00"
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
               "100.00",
               "0.00",
               "50.00",
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
         "2020-03-03",
         "2020-03-04",
         "2020-03-05",
         "2020-03-06",
         "2020-03-07",
         "2020-03-08",
         "2020-03-09",
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
               "1.71",
               "0.71",
               "inf",
               "0.36",
               "3.06",
               "7.17",
               "2.97",
               "8.66",
               "4.34",
               "5.04",
               "7.27"
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
               "1.00",
               "inf",
               "1.71",
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Wheeler

### Demographics
   - Average Age: 63.68 years old
   - Population Density: 0.83 people per square mile

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
               "68",
               "75",
               "48",
               "37",
               "100",
               "89",
               "47",
               "51",
               "17",
               "61",
               "64",
               "118",
               "163",
               "102",
               "138",
               "123",
               "80",
               "45"
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
               "51.05",
               "48.95"
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
## Yamhill

### Demographics
   - Average Age: 48.12 years old
   - Population Density: 144.51 people per square mile

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
               "5973",
               "6689",
               "6802",
               "7597",
               "7317",
               "6279",
               "6573",
               "6885",
               "6282",
               "6390",
               "6610",
               "7023",
               "6487",
               "5761",
               "4187",
               "3009",
               "1835",
               "2121"
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
               "49.98",
               "50.02"
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
               6.0,
               6.0,
               6.0,
               7.0,
               7.0,
               11.0,
               13.0,
               13.0
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
               "16.67",
               "0.00",
               "57.14",
               "18.18",
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
               "4.50",
               "inf",
               "1.53",
               "4.15",
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
