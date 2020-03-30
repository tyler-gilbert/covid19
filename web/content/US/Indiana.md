---
categories:
- US
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- US
title: Indiana, US
chart: true
menu:
  sidebar:
    name: Indiana
    parent: US
---

- [State Overview](#state-overview)
- [County List](#county-list)

# Demographics
- Average Age: 46.81 years old
- Population Density: 182.25 people per square mile

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
               "418299",
               "437254",
               "446006",
               "458348",
               "477704",
               "437569",
               "419363",
               "419402",
               "402312",
               "419401",
               "445154",
               "448932",
               "411619",
               "336316",
               "241379",
               "172617",
               "119377",
               "126374"
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
               2.0,
               3.0,
               6.0,
               11.0,
               13.0,
               13.0,
               16.0,
               20.0,
               25.0,
               30.0,
               39.0,
               60.0,
               86.0,
               128.0,
               204.0,
               270.0,
               368.0,
               477.0,
               645.0,
               979.0,
               1233.0,
               1513.0
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
               1.0,
               2.0,
               2.0,
               2.0,
               2.0,
               4.0,
               6.0,
               7.0,
               12.0,
               14.0,
               17.0,
               25.0,
               31.0,
               32.0
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
               "100.00",
               "50.00",
               "100.00",
               "83.33",
               "18.18",
               "0.00",
               "23.08",
               "25.00",
               "25.00",
               "20.00",
               "30.00",
               "53.85",
               "43.33",
               "48.84",
               "59.38",
               "32.35",
               "36.30",
               "29.62",
               "35.22",
               "51.78",
               "25.94",
               "22.71"
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
               "100.00",
               "0.00",
               "0.00",
               "0.00",
               "100.00",
               "50.00",
               "16.67",
               "71.43",
               "16.67",
               "21.43",
               "47.06",
               "24.00",
               "3.23"
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
               "1.00",
               "1.71",
               "1.00",
               "1.14",
               "4.15",
               "inf",
               "3.34",
               "3.11",
               "3.11",
               "3.80",
               "2.64",
               "1.61",
               "1.93",
               "1.74",
               "1.49",
               "2.47",
               "2.24",
               "2.67",
               "2.30",
               "1.66",
               "3.00",
               "3.39"
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
               "1.00",
               "inf",
               "inf",
               "inf",
               "1.00",
               "1.71",
               "4.50",
               "1.29",
               "4.50",
               "3.57",
               "1.80",
               "3.22",
               "21.83"
            ]
         }
      ]
   }
}
```

> The above plot shows how long the disease takes to double. This number needs consistently above 14 to halt the spread of the disease. Holes in the data mean the measurement was the same from the previous day (so it would take forever to double.

# County List

- [Adams](#adams)
- [Allen](#allen)
- [Bartholomew](#bartholomew)
- [Benton](#benton)
- [Blackford](#blackford)
- [Boone](#boone)
- [Brown](#brown)
- [Carroll](#carroll)
- [Cass](#cass)
- [Clark](#clark)
- [Clay](#clay)
- [Clinton](#clinton)
- [Crawford](#crawford)
- [Daviess](#daviess)
- [DeKalb](#dekalb)
- [Dearborn](#dearborn)
- [Decatur](#decatur)
- [Delaware](#delaware)
- [Dubois](#dubois)
- [Elkhart](#elkhart)
- [Fayette](#fayette)
- [Floyd](#floyd)
- [Fountain](#fountain)
- [Franklin](#franklin)
- [Fulton](#fulton)
- [Gibson](#gibson)
- [Grant](#grant)
- [Greene](#greene)
- [Hamilton](#hamilton)
- [Hancock](#hancock)
- [Harrison](#harrison)
- [Hendricks](#hendricks)
- [Henry](#henry)
- [Howard](#howard)
- [Huntington](#huntington)
- [Jackson](#jackson)
- [Jasper](#jasper)
- [Jay](#jay)
- [Jefferson](#jefferson)
- [Jennings](#jennings)
- [Johnson](#johnson)
- [Knox](#knox)
- [Kosciusko](#kosciusko)
- [LaGrange](#lagrange)
- [LaPorte](#laporte)
- [Lake](#lake)
- [Lawrence](#lawrence)
- [Madison](#madison)
- [Marion](#marion)
- [Marshall](#marshall)
- [Martin](#martin)
- [Miami](#miami)
- [Monroe](#monroe)
- [Montgomery](#montgomery)
- [Morgan](#morgan)
- [Newton](#newton)
- [Noble](#noble)
- [Ohio](#ohio)
- [Orange](#orange)
- [Owen](#owen)
- [Parke](#parke)
- [Perry](#perry)
- [Pike](#pike)
- [Porter](#porter)
- [Posey](#posey)
- [Pulaski](#pulaski)
- [Putnam](#putnam)
- [Randolph](#randolph)
- [Ripley](#ripley)
- [Rush](#rush)
- [Scott](#scott)
- [Shelby](#shelby)
- [Spencer](#spencer)
- [St.Joseph](#st.joseph)
- [Starke](#starke)
- [Steuben](#steuben)
- [Sullivan](#sullivan)
- [Switzerland](#switzerland)
- [Tippecanoe](#tippecanoe)
- [Tipton](#tipton)
- [Unassigned](#unassigned)
- [Union](#union)
- [Vanderburgh](#vanderburgh)
- [Vermillion](#vermillion)
- [Vigo](#vigo)
- [Wabash](#wabash)
- [Warren](#warren)
- [Warrick](#warrick)
- [Washington](#washington)
- [Wayne](#wayne)
- [Wells](#wells)
- [White](#white)
- [Whitley](#whitley)

## Adams

### Demographics
   - Average Age: 48.18 years old
   - Population Density: 103.53 people per square mile

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
               "3317",
               "3038",
               "2997",
               "2511",
               "2172",
               "2096",
               "2017",
               "1892",
               "1835",
               "1922",
               "2025",
               "2009",
               "2113",
               "1600",
               "1185",
               "977",
               "529",
               "960"
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
               "49.90",
               "50.10"
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
## Allen

### Demographics
   - Average Age: 45.40 years old
   - Population Density: 560.51 people per square mile

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
               "26158",
               "26613",
               "27081",
               "25510",
               "24838",
               "26194",
               "24081",
               "23346",
               "22566",
               "22947",
               "23503",
               "24023",
               "21849",
               "18144",
               "11967",
               "8408",
               "5909",
               "6879"
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
               "48.83",
               "51.17"
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
               7.0,
               7.0,
               8.0,
               21.0,
               23.0,
               26.0
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
               "75.00",
               "0.00",
               "14.29",
               "162.50",
               "9.52",
               "13.04"
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
               "1.24",
               "inf",
               "5.19",
               "0.72",
               "7.62",
               "5.65"
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
## Bartholomew

### Demographics
   - Average Age: 46.02 years old
   - Population Density: 200.04 people per square mile

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
               "5449",
               "6022",
               "5003",
               "4862",
               "5101",
               "6200",
               "5352",
               "5567",
               "4935",
               "5355",
               "5200",
               "5467",
               "4588",
               "4244",
               "3102",
               "2543",
               "1493",
               "1410"
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
               5.0,
               5.0,
               5.0,
               5.0,
               6.0,
               6.0,
               7.0,
               10.0
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
               "20.00",
               "0.00",
               "16.67",
               "42.86"
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
               "3.80",
               "inf",
               "4.50",
               "1.94"
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
   - Average Age: 47.00 years old
   - Population Density: 21.33 people per square mile

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
               "553",
               "621",
               "613",
               "573",
               "482",
               "467",
               "485",
               "455",
               "566",
               "551",
               "597",
               "676",
               "543",
               "458",
               "387",
               "291",
               "204",
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
## Blackford

### Demographics
   - Average Age: 53.65 years old
   - Population Density: 73.32 people per square mile

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
               "633",
               "806",
               "663",
               "731",
               "661",
               "710",
               "621",
               "599",
               "694",
               "814",
               "855",
               "1021",
               "811",
               "814",
               "596",
               "437",
               "355",
               "308"
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
               "49.77",
               "50.23"
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
## Boone

### Demographics
   - Average Age: 43.61 years old
   - Population Density: 151.95 people per square mile

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
               "4313",
               "4584",
               "5456",
               "4322",
               "3360",
               "3454",
               "3974",
               "4463",
               "4340",
               "4722",
               "4995",
               "4513",
               "3696",
               "2461",
               "2388",
               "1293",
               "1083",
               "904"
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
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
         "2020-03-29"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               3.0,
               3.0,
               3.0,
               4.0,
               7.0,
               7.0,
               8.0,
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
               "0.00",
               "0.00",
               "33.33",
               "75.00",
               "0.00",
               "14.29",
               "62.50"
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
               "2.41",
               "1.24",
               "inf",
               "5.19",
               "1.43"
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
   - Average Age: 55.02 years old
   - Population Density: 47.48 people per square mile

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
               "568",
               "804",
               "803",
               "853",
               "717",
               "706",
               "666",
               "882",
               "691",
               "983",
               "1133",
               "1407",
               "1337",
               "1455",
               "798",
               "522",
               "368",
               "341"
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
               "49.49",
               "50.51"
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
## Carroll

### Demographics
   - Average Age: 52.60 years old
   - Population Density: 53.31 people per square mile

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
               "1045",
               "1320",
               "1319",
               "1312",
               "1049",
               "1050",
               "1009",
               "1144",
               "1360",
               "1220",
               "1421",
               "1500",
               "1490",
               "1112",
               "1088",
               "691",
               "358",
               "506"
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
               "50.19",
               "49.81"
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
## Cass

### Demographics
   - Average Age: 51.72 years old
   - Population Density: 91.78 people per square mile

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
               "2290",
               "2222",
               "2729",
               "2575",
               "2320",
               "2247",
               "2044",
               "2175",
               "2561",
               "2445",
               "2690",
               "2836",
               "2420",
               "2037",
               "1602",
               "1143",
               "753",
               "995"
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
               "50.11",
               "49.89"
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
## Clark

### Demographics
   - Average Age: 45.83 years old
   - Population Density: 307.53 people per square mile

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
               "7309",
               "7216",
               "7486",
               "6907",
               "6984",
               "7813",
               "7978",
               "8043",
               "7698",
               "7594",
               "7831",
               "7771",
               "7729",
               "6164",
               "4485",
               "2923",
               "1961",
               "1810"
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
               "48.71",
               "51.29"
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
               5.0,
               6.0,
               10.0,
               12.0,
               18.0,
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
               "0.00",
               "25.00",
               "20.00",
               "66.67",
               "20.00",
               "50.00",
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
               "3.11",
               "3.80",
               "1.36",
               "3.80",
               "1.71",
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
## Clay

### Demographics
   - Average Age: 51.67 years old
   - Population Density: 72.88 people per square mile

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
               "1547",
               "1586",
               "1818",
               "1653",
               "1471",
               "1569",
               "1557",
               "1629",
               "1608",
               "1688",
               "1820",
               "1861",
               "1908",
               "1304",
               "1286",
               "739",
               "561",
               "663"
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
               "49.24",
               "50.76"
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
## Clinton

### Demographics
   - Average Age: 49.45 years old
   - Population Density: 79.70 people per square mile

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
               "2217",
               "2585",
               "2232",
               "2194",
               "1865",
               "1955",
               "1884",
               "1830",
               "2026",
               "1931",
               "2123",
               "2080",
               "2218",
               "1713",
               "1049",
               "843",
               "766",
               "790"
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
               "49.49",
               "50.51"
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
## Crawford

### Demographics
   - Average Age: 49.67 years old
   - Population Density: 34.26 people per square mile

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
               "563",
               "730",
               "621",
               "660",
               "543",
               "551",
               "584",
               "607",
               "625",
               "649",
               "801",
               "834",
               "815",
               "745",
               "503",
               "327",
               "227",
               "196"
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
               "50.72",
               "49.28"
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
## Daviess

### Demographics
   - Average Age: 45.02 years old
   - Population Density: 75.39 people per square mile

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
               "2596",
               "2867",
               "2638",
               "2440",
               "2000",
               "2109",
               "1913",
               "1779",
               "1812",
               "1698",
               "2131",
               "2236",
               "1771",
               "1698",
               "1114",
               "872",
               "638",
               "625"
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
               "50.50",
               "49.50"
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
## DeKalb

### Demographics
   - Average Age: 45.92 years old
   - Population Density: 117.36 people per square mile

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
               "2625",
               "3008",
               "3031",
               "2797",
               "2538",
               "2681",
               "2482",
               "2776",
               "2340",
               "2744",
               "3218",
               "3121",
               "2731",
               "2406",
               "1502",
               "1240",
               "783",
               "681"
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
               "49.89",
               "50.11"
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
## Dearborn

### Demographics
   - Average Age: 48.78 years old
   - Population Density: 161.20 people per square mile

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
               "2578",
               "3116",
               "3422",
               "3441",
               "2769",
               "2736",
               "2628",
               "2497",
               "3404",
               "3565",
               "3830",
               "3829",
               "3500",
               "3021",
               "1846",
               "1312",
               "1071",
               "936"
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
               "50.03",
               "49.97"
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
               2.0,
               2.0,
               3.0,
               4.0,
               8.0,
               10.0
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
               "50.00",
               "33.33",
               "100.00",
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
               "inf",
               "inf",
               "inf",
               "1.71",
               "2.41",
               "1.00",
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
## Decatur

### Demographics
   - Average Age: 46.75 years old
   - Population Density: 71.10 people per square mile

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
               "1731",
               "1818",
               "1724",
               "1851",
               "1628",
               "1604",
               "1579",
               "1573",
               "1569",
               "1680",
               "1973",
               "1878",
               "1685",
               "1408",
               "978",
               "881",
               "531",
               "461"
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
               "49.72",
               "50.28"
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
               6.0,
               7.0,
               13.0,
               26.0,
               30.0,
               40.0
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
               "16.67",
               "85.71",
               "100.00",
               "15.38",
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
               "4.50",
               "1.12",
               "1.00",
               "4.84",
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
## Delaware

### Demographics
   - Average Age: 48.57 years old
   - Population Density: 292.00 people per square mile

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
               "5860",
               "6054",
               "5709",
               "10636",
               "16241",
               "7118",
               "5808",
               "5202",
               "6419",
               "6649",
               "7063",
               "6908",
               "6796",
               "5735",
               "4964",
               "3456",
               "2387",
               "2611"
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
               "48.21",
               "51.79"
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
               2.0,
               2.0,
               4.0,
               7.0,
               7.0,
               8.0,
               8.0,
               14.0
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
               "100.00",
               "75.00",
               "0.00",
               "14.29",
               "0.00",
               "75.00"
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
               "1.00",
               "1.24",
               "inf",
               "5.19",
               "inf",
               "1.24"
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
## Dubois

### Demographics
   - Average Age: 47.84 years old
   - Population Density: 97.46 people per square mile

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
               "2808",
               "3143",
               "2728",
               "2786",
               "2516",
               "2232",
               "2363",
               "2381",
               "2680",
               "2659",
               "3174",
               "2713",
               "3222",
               "2062",
               "1735",
               "1521",
               "900",
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
               "49.62",
               "50.38"
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
## Elkhart

### Demographics
   - Average Age: 45.36 years old
   - Population Density: 435.17 people per square mile

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
               "15402",
               "15319",
               "16547",
               "14478",
               "13043",
               "13161",
               "12532",
               "13039",
               "12157",
               "12531",
               "12924",
               "12833",
               "11195",
               "9357",
               "6766",
               "4773",
               "3575",
               "3972"
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
               4.0,
               4.0,
               4.0,
               5.0,
               7.0,
               9.0,
               11.0,
               12.0
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
               "25.00",
               "40.00",
               "28.57",
               "22.22",
               "9.09"
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
               "2.76",
               "3.45",
               "7.97"
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
## Fayette

### Demographics
   - Average Age: 54.00 years old
   - Population Density: 108.11 people per square mile

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
               "1158",
               "1425",
               "1564",
               "1524",
               "1326",
               "1276",
               "1135",
               "1407",
               "1474",
               "1533",
               "1637",
               "1568",
               "1755",
               "1387",
               "1167",
               "764",
               "510",
               "649"
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
               "49.33",
               "50.67"
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
               2.0,
               3.0,
               3.0,
               3.0,
               4.0,
               5.0
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
               "100.00",
               "50.00",
               "0.00",
               "0.00",
               "33.33",
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
               "inf",
               "1.00",
               "1.71",
               "inf",
               "inf",
               "2.41",
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
## Floyd

### Demographics
   - Average Age: 48.99 years old
   - Population Density: 517.83 people per square mile

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
               "4532",
               "4612",
               "5287",
               "5189",
               "4692",
               "4679",
               "4649",
               "4814",
               "4899",
               "5364",
               "5486",
               "5718",
               "5182",
               "3862",
               "3112",
               "1821",
               "1257",
               "1654"
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
               "48.35",
               "51.65"
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
               3.0,
               3.0,
               6.0,
               6.0,
               7.0,
               11.0,
               13.0,
               14.0
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
               "100.00",
               "0.00",
               "16.67",
               "57.14",
               "18.18",
               "7.69"
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
               "1.00",
               "inf",
               "4.50",
               "1.53",
               "4.15",
               "9.35"
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
## Fountain

### Demographics
   - Average Age: 51.12 years old
   - Population Density: 41.43 people per square mile

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
               "918",
               "1073",
               "970",
               "1055",
               "940",
               "862",
               "969",
               "738",
               "1148",
               "1133",
               "1247",
               "1091",
               "1161",
               "1041",
               "708",
               "655",
               "416",
               "361"
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
               "50.05",
               "49.95"
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
## Franklin

### Demographics
   - Average Age: 48.84 years old
   - Population Density: 58.37 people per square mile

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
               "1304",
               "1513",
               "1556",
               "1574",
               "1307",
               "1121",
               "1192",
               "1269",
               "1484",
               "1552",
               "1707",
               "1759",
               "1606",
               "1248",
               "1025",
               "771",
               "415",
               "439"
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
               "50.02",
               "49.98"
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
               7.0,
               7.0,
               13.0,
               21.0,
               23.0,
               26.0
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
               1.0,
               1.0,
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
               "0.00",
               "75.00",
               "0.00",
               "85.71",
               "61.54",
               "9.52",
               "13.04"
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
               "100.00",
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
               "1.24",
               "inf",
               "1.12",
               "1.45",
               "7.62",
               "5.65"
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
               "1.00",
               "inf"
            ]
         }
      ]
   }
}
```
## Fulton

### Demographics
   - Average Age: 49.74 years old
   - Population Density: 54.42 people per square mile

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
               "1173",
               "1618",
               "1137",
               "1259",
               "1126",
               "1148",
               "1090",
               "1238",
               "1118",
               "1228",
               "1462",
               "1369",
               "1495",
               "1283",
               "836",
               "641",
               "574",
               "417"
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
               "49.29",
               "50.71"
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
## Gibson

### Demographics
   - Average Age: 48.76 years old
   - Population Density: 67.32 people per square mile

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
               "2051",
               "2274",
               "2130",
               "2222",
               "2057",
               "1879",
               "1986",
               "2122",
               "1895",
               "2132",
               "2400",
               "2704",
               "2083",
               "2006",
               "1151",
               "1032",
               "796",
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
               "50.15",
               "49.85"
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
               2.0,
               2.0,
               3.0,
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
               "inf",
               "1.71",
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
## Grant

### Demographics
   - Average Age: 51.73 years old
   - Population Density: 161.37 people per square mile

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
               "3631",
               "4063",
               "3798",
               "5140",
               "5948",
               "3752",
               "3349",
               "3573",
               "3579",
               "3982",
               "4492",
               "4715",
               "4639",
               "3670",
               "3136",
               "2243",
               "1528",
               "1706"
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
               "47.70",
               "52.30"
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
               2.0,
               2.0,
               3.0,
               3.0,
               3.0,
               5.0,
               5.0,
               7.0
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
               "50.00",
               "0.00",
               "0.00",
               "66.67",
               "0.00",
               "40.00"
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
               "1.71",
               "inf",
               "inf",
               "1.36",
               "inf",
               "2.06"
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
## Greene

### Demographics
   - Average Age: 51.22 years old
   - Population Density: 59.15 people per square mile

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
               "1713",
               "2057",
               "2029",
               "1985",
               "1711",
               "1806",
               "1808",
               "1732",
               "2060",
               "2186",
               "2449",
               "2276",
               "2365",
               "1757",
               "1718",
               "1053",
               "886",
               "704"
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
               1.0,
               1.0,
               1.0,
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
               "-100.00",
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
               "-0.00",
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
## Hamilton

### Demographics
   - Average Age: 42.08 years old
   - Population Density: 784.84 people per square mile

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
               "21447",
               "23980",
               "27196",
               "22406",
               "16461",
               "16364",
               "21543",
               "23548",
               "24179",
               "24240",
               "22773",
               "20204",
               "15712",
               "13141",
               "9033",
               "5552",
               "4161",
               "4155"
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
               "48.89",
               "51.11"
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
               18.0,
               18.0,
               25.0,
               30.0,
               40.0,
               52.0,
               64.0,
               83.0
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
               "38.89",
               "20.00",
               "33.33",
               "30.00",
               "23.08",
               "29.69"
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
               "2.11",
               "3.80",
               "2.41",
               "2.64",
               "3.34",
               "2.67"
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
## Hancock

### Demographics
   - Average Age: 45.74 years old
   - Population Density: 240.68 people per square mile

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
               "4164",
               "4827",
               "5128",
               "5109",
               "4172",
               "4119",
               "4381",
               "5074",
               "4580",
               "5221",
               "5716",
               "5379",
               "4439",
               "3958",
               "3148",
               "2036",
               "1304",
               "1075"
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
               "49.11",
               "50.89"
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
               2.0,
               2.0,
               4.0,
               8.0,
               9.0,
               13.0,
               19.0,
               22.0
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
               "100.00",
               "100.00",
               "12.50",
               "44.44",
               "46.15",
               "15.79"
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
               "1.00",
               "1.00",
               "5.88",
               "1.88",
               "1.83",
               "4.73"
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
## Harrison

### Demographics
   - Average Age: 48.35 years old
   - Population Density: 81.56 people per square mile

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
               "2269",
               "2412",
               "2670",
               "2473",
               "2074",
               "2223",
               "2342",
               "2630",
               "2225",
               "2666",
               "3153",
               "2897",
               "2971",
               "2273",
               "1821",
               "1075",
               "838",
               "700"
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
               "50.05",
               "49.95"
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
               2.0,
               2.0,
               4.0,
               7.0,
               14.0
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
               "75.00",
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
               "1.00",
               "1.24",
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
## Hendricks

### Demographics
   - Average Age: 44.42 years old
   - Population Density: 393.59 people per square mile

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
               "9680",
               "11740",
               "12318",
               "11181",
               "9157",
               "8785",
               "11421",
               "11757",
               "11653",
               "11631",
               "11017",
               "10289",
               "9441",
               "7298",
               "5281",
               "3251",
               "2528",
               "2512"
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
               8.0,
               8.0,
               13.0,
               15.0,
               21.0,
               28.0,
               36.0,
               48.0
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
               "300.00",
               "0.00",
               "62.50",
               "15.38",
               "40.00",
               "33.33",
               "28.57",
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
               "1.00",
               "0.50",
               "inf",
               "1.43",
               "4.84",
               "2.06",
               "2.41",
               "2.76",
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
               "inf",
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Henry

### Demographics
   - Average Age: 51.08 years old
   - Population Density: 122.76 people per square mile

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
               "2390",
               "2779",
               "2926",
               "2928",
               "3033",
               "3095",
               "2792",
               "2897",
               "3209",
               "3240",
               "3565",
               "3462",
               "3289",
               "2842",
               "2219",
               "1570",
               "1180",
               "1067"
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
## Howard

### Demographics
   - Average Age: 51.86 years old
   - Population Density: 280.29 people per square mile

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
               "5014",
               "4912",
               "5502",
               "4877",
               "5044",
               "4991",
               "4659",
               "4690",
               "4850",
               "5172",
               "5755",
               "5869",
               "5708",
               "4899",
               "3838",
               "2728",
               "1830",
               "2049"
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
               "48.37",
               "51.63"
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
               6.0,
               6.0,
               7.0,
               9.0,
               12.0
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
               "16.67",
               "28.57",
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
               "4.50",
               "2.76",
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
## Huntington

### Demographics
   - Average Age: 48.48 years old
   - Population Density: 93.77 people per square mile

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
               "2061",
               "2097",
               "2369",
               "2448",
               "2501",
               "2219",
               "2118",
               "2066",
               "2271",
               "2325",
               "2637",
               "2883",
               "2397",
               "1970",
               "1317",
               "1276",
               "730",
               "693"
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
               "49.14",
               "50.86"
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
## Jackson

### Demographics
   - Average Age: 48.67 years old
   - Population Density: 85.52 people per square mile

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
               "2926",
               "2965",
               "3070",
               "2766",
               "2429",
               "2608",
               "2766",
               "3109",
               "2840",
               "2802",
               "3109",
               "2951",
               "2719",
               "1992",
               "1950",
               "1147",
               "829",
               "960"
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
               "49.67",
               "50.33"
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
               4.0,
               7.0,
               7.0
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
               "100.00",
               "75.00",
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
               "1.00",
               "1.24",
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
## Jasper

### Demographics
   - Average Age: 46.70 years old
   - Population Density: 59.60 people per square mile

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
               "1943",
               "2294",
               "2253",
               "2454",
               "2142",
               "1860",
               "1766",
               "2069",
               "2054",
               "2026",
               "2372",
               "2353",
               "2221",
               "1821",
               "1521",
               "975",
               "780",
               "545"
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
               "49.92",
               "50.08"
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
               3.0,
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
               "200.00",
               "33.33",
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
               "inf",
               "0.63",
               "2.41",
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
## Jay

### Demographics
   - Average Age: 47.31 years old
   - Population Density: 54.69 people per square mile

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
               "1497",
               "1325",
               "1646",
               "1445",
               "1298",
               "1201",
               "1075",
               "1003",
               "1300",
               "1349",
               "1464",
               "1333",
               "1464",
               "1030",
               "1017",
               "636",
               "525",
               "385"
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
               "49.53",
               "50.47"
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
## Jefferson

### Demographics
   - Average Age: 48.04 years old
   - Population Density: 88.81 people per square mile

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
               "1911",
               "1636",
               "1807",
               "2346",
               "2391",
               "1833",
               "1904",
               "2105",
               "1785",
               "2034",
               "2366",
               "2681",
               "2012",
               "1967",
               "1252",
               "931",
               "708",
               "568"
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
               "47.56",
               "52.44"
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
## Jennings

### Demographics
   - Average Age: 44.41 years old
   - Population Density: 73.28 people per square mile

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
               "1716",
               "1797",
               "1780",
               "1849",
               "1788",
               "1683",
               "1444",
               "1926",
               "1402",
               "2055",
               "2160",
               "1833",
               "1949",
               "1584",
               "1087",
               "850",
               "499",
               "325"
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
               2.0,
               3.0,
               4.0,
               5.0,
               10.0,
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
               "0.00",
               "100.00",
               "50.00",
               "33.33",
               "25.00",
               "100.00",
               "30.00"
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
               "1.00",
               "1.71",
               "2.41",
               "3.11",
               "1.00",
               "2.64"
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
## Johnson

### Demographics
   - Average Age: 44.49 years old
   - Population Density: 471.31 people per square mile

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
               "9848",
               "11561",
               "10105",
               "10043",
               "9240",
               "9961",
               "10103",
               "10558",
               "10187",
               "10184",
               "10200",
               "9124",
               "8950",
               "7305",
               "5516",
               "4298",
               "2046",
               "2335"
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
               "49.05",
               "50.95"
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
               12.0,
               18.0,
               24.0,
               36.0,
               42.0,
               52.0,
               71.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               1.0,
               1.0,
               3.0,
               3.0,
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
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
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
               "50.00",
               "33.33",
               "50.00",
               "16.67",
               "23.81",
               "36.54"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "200.00",
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
               "1.71",
               "2.41",
               "1.71",
               "4.50",
               "3.25",
               "2.23"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "0.63",
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
## Knox

### Demographics
   - Average Age: 46.59 years old
   - Population Density: 71.38 people per square mile

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
               "2192",
               "2644",
               "1776",
               "3177",
               "3049",
               "2120",
               "2233",
               "2438",
               "1709",
               "2163",
               "2457",
               "2691",
               "2376",
               "2302",
               "1253",
               "1332",
               "874",
               "623"
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
               "50.65",
               "49.35"
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
## Kosciusko

### Demographics
   - Average Age: 45.48 years old
   - Population Density: 142.16 people per square mile

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
               "5078",
               "5453",
               "5279",
               "5387",
               "5278",
               "4987",
               "4993",
               "4974",
               "4187",
               "4829",
               "5256",
               "5647",
               "5015",
               "4212",
               "3099",
               "2454",
               "1454",
               "1224"
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
               "49.82",
               "50.18"
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
               "100.00",
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
               "1.00",
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
## LaGrange

### Demographics
   - Average Age: 39.71 years old
   - Population Density: 100.70 people per square mile

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
               "3574",
               "3643",
               "3501",
               "3164",
               "2584",
               "2336",
               "2260",
               "2171",
               "2060",
               "2088",
               "2190",
               "1794",
               "2424",
               "1842",
               "1220",
               "1075",
               "545",
               "471"
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
               "50.72",
               "49.28"
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
## LaPorte

### Demographics
   - Average Age: 47.90 years old
   - Population Density: 180.32 people per square mile

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
               "6607",
               "6392",
               "6791",
               "6669",
               "6847",
               "7324",
               "7081",
               "7007",
               "6629",
               "7286",
               "7705",
               "8115",
               "7525",
               "6744",
               "4343",
               "3456",
               "2084",
               "1947"
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
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               4.0,
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
               "0.00",
               "0.00",
               "0.00",
               "100.00",
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
               "1.00",
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
## Lake

### Demographics
   - Average Age: 48.89 years old
   - Population Density: 777.24 people per square mile

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
               "29700",
               "31947",
               "33641",
               "33112",
               "31366",
               "29344",
               "30137",
               "31715",
               "29477",
               "30512",
               "32898",
               "35153",
               "31617",
               "25624",
               "17755",
               "12755",
               "9322",
               "10774"
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
               "48.38",
               "51.62"
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
               17.0,
               19.0,
               31.0,
               47.0,
               68.0,
               85.0
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
               "70.00",
               "11.76",
               "63.16",
               "51.61",
               "44.68",
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
               "inf",
               "1.31",
               "6.23",
               "1.42",
               "1.67",
               "1.88",
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
## Lawrence

### Demographics
   - Average Age: 50.93 years old
   - Population Density: 100.90 people per square mile

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
               "2493",
               "2970",
               "2790",
               "2830",
               "2394",
               "2535",
               "2601",
               "2851",
               "2573",
               "3025",
               "3345",
               "3306",
               "3127",
               "2852",
               "2210",
               "1651",
               "1082",
               "984"
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
               "49.45",
               "50.55"
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
               5.0,
               5.0,
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
               "0.00",
               "100.00",
               "150.00",
               "0.00",
               "60.00"
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
               "0.76",
               "inf",
               "1.47"
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
## Madison

### Demographics
   - Average Age: 50.04 years old
   - Population Density: 285.92 people per square mile

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
               "7476",
               "7526",
               "8371",
               "8267",
               "7816",
               "8247",
               "7995",
               "8411",
               "7814",
               "8525",
               "9031",
               "8768",
               "8441",
               "7606",
               "5518",
               "3962",
               "2894",
               "2837"
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
               "49.96",
               "50.04"
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
               2.0,
               2.0,
               3.0,
               4.0,
               4.0,
               7.0,
               12.0,
               18.0
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
               "50.00",
               "33.33",
               "0.00",
               "75.00",
               "71.43",
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
               "1.71",
               "2.41",
               "inf",
               "1.24",
               "1.29",
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
## Marion

### Demographics
   - Average Age: 42.98 years old
   - Population Density: 2343.09 people per square mile

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
               "69368",
               "65989",
               "62511",
               "58298",
               "67324",
               "83708",
               "73425",
               "64051",
               "57364",
               "56492",
               "59664",
               "60301",
               "52673",
               "39640",
               "26488",
               "18667",
               "14279",
               "14281"
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
               "48.17",
               "51.83"
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
               82.0,
               82.0,
               161.0,
               226.0,
               293.0,
               484.0,
               584.0,
               676.0
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
               3.0,
               3.0,
               6.0,
               6.0,
               6.0,
               8.0,
               10.0,
               10.0
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
               "8100.00",
               "0.00",
               "96.34",
               "40.37",
               "29.65",
               "65.19",
               "20.66",
               "15.75"
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
               "100.00",
               "0.00",
               "0.00",
               "33.33",
               "25.00",
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
               "0.16",
               "inf",
               "1.03",
               "2.04",
               "2.67",
               "1.38",
               "3.69",
               "4.74"
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
               "1.00",
               "inf",
               "inf",
               "2.41",
               "3.11",
               "inf"
            ]
         }
      ]
   }
}
```
## Marshall

### Demographics
   - Average Age: 51.13 years old
   - Population Density: 103.56 people per square mile

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
               "2878",
               "3135",
               "3527",
               "3475",
               "2818",
               "2502",
               "2433",
               "2495",
               "2987",
               "2988",
               "3183",
               "3090",
               "3148",
               "2587",
               "1793",
               "1262",
               "1071",
               "1223"
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
               1.0,
               4.0,
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
               "0.00",
               "300.00",
               "-25.00",
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
               "0.50",
               "-2.41",
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
## Martin

### Demographics
   - Average Age: 52.51 years old
   - Population Density: 29.98 people per square mile

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
               "635",
               "500",
               "731",
               "724",
               "531",
               "554",
               "554",
               "515",
               "673",
               "626",
               "742",
               "873",
               "667",
               "653",
               "438",
               "314",
               "218",
               "262"
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
               "50.49",
               "49.51"
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
## Miami

### Demographics
   - Average Age: 49.64 years old
   - Population Density: 95.13 people per square mile

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
               "1863",
               "2210",
               "2246",
               "2129",
               "2481",
               "2387",
               "2358",
               "2293",
               "2334",
               "2348",
               "2474",
               "2717",
               "1980",
               "2015",
               "1537",
               "1099",
               "652",
               "778"
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
               "53.16",
               "46.84"
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
## Monroe

### Demographics
   - Average Age: 43.06 years old
   - Population Density: 353.49 people per square mile

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
               "6402",
               "6565",
               "6104",
               "15620",
               "27453",
               "11994",
               "9080",
               "8341",
               "6782",
               "7064",
               "7220",
               "7725",
               "7274",
               "5933",
               "4410",
               "2756",
               "2200",
               "2480"
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
               "49.80",
               "50.20"
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
               3.0,
               4.0,
               6.0,
               8.0,
               16.0,
               22.0
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
               "200.00",
               "33.33",
               "50.00",
               "33.33",
               "100.00",
               "37.50"
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
               "0.63",
               "2.41",
               "1.71",
               "2.41",
               "1.00",
               "2.18"
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
## Montgomery

### Demographics
   - Average Age: 48.07 years old
   - Population Density: 75.74 people per square mile

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
               "2287",
               "2464",
               "2482",
               "2563",
               "2575",
               "2219",
               "2079",
               "2231",
               "2172",
               "2456",
               "2728",
               "2899",
               "2441",
               "2088",
               "1601",
               "1286",
               "1010",
               "695"
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
               "50.79",
               "49.21"
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
               3.0,
               4.0,
               5.0
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
               "50.00",
               "33.33",
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
               "inf",
               "inf",
               "inf",
               "1.00",
               "1.71",
               "2.41",
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
## Morgan

### Demographics
   - Average Age: 47.04 years old
   - Population Density: 170.31 people per square mile

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
               "4002",
               "4303",
               "4781",
               "4615",
               "4139",
               "3903",
               "3868",
               "4130",
               "4115",
               "5135",
               "5372",
               "5500",
               "4799",
               "3864",
               "2932",
               "1898",
               "1247",
               "1124"
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
               1.0,
               1.0,
               3.0,
               5.0,
               7.0,
               10.0,
               14.0,
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
               "200.00",
               "66.67",
               "40.00",
               "42.86",
               "40.00",
               "42.86"
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
               "0.63",
               "1.36",
               "2.06",
               "1.94",
               "2.06",
               "1.94"
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
## Newton

### Demographics
   - Average Age: 48.05 years old
   - Population Density: 34.74 people per square mile

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
               "733",
               "852",
               "901",
               "836",
               "761",
               "825",
               "819",
               "771",
               "930",
               "845",
               "1033",
               "1103",
               "1041",
               "929",
               "540",
               "556",
               "328",
               "215"
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
               "49.96",
               "50.04"
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
## Noble

### Demographics
   - Average Age: 45.65 years old
   - Population Density: 113.62 people per square mile

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
               "3072",
               "3280",
               "3509",
               "3313",
               "2846",
               "2802",
               "2735",
               "3040",
               "2825",
               "3061",
               "3357",
               "3332",
               "3176",
               "2562",
               "1796",
               "1217",
               "754",
               "774"
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
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
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
               "100.00",
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
               "1.00",
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
## Ohio

### Demographics
   - Average Age: 51.26 years old
   - Population Density: 67.30 people per square mile

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
               "276",
               "401",
               "253",
               "332",
               "232",
               "322",
               "312",
               "295",
               "372",
               "369",
               "512",
               "594",
               "406",
               "374",
               "339",
               "270",
               "125",
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
               "49.57",
               "50.43"
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
## Orange

### Demographics
   - Average Age: 49.13 years old
   - Population Density: 47.88 people per square mile

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
               "1171",
               "1106",
               "1396",
               "1287",
               "1072",
               "1117",
               "1064",
               "1144",
               "1059",
               "1198",
               "1428",
               "1629",
               "1245",
               "1255",
               "894",
               "689",
               "424",
               "369"
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
               "49.76",
               "50.24"
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
## Owen

### Demographics
   - Average Age: 49.25 years old
   - Population Density: 53.83 people per square mile

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
               "1120",
               "1210",
               "1274",
               "1289",
               "1054",
               "1103",
               "1071",
               "1267",
               "1069",
               "1401",
               "1792",
               "1773",
               "1622",
               "1466",
               "937",
               "682",
               "398",
               "350"
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
               "50.91",
               "49.09"
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
               2.0,
               4.0,
               4.0,
               5.0,
               7.0,
               9.0
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
               "100.00",
               "100.00",
               "0.00",
               "25.00",
               "40.00",
               "28.57"
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
               "1.00",
               "1.00",
               "inf",
               "3.11",
               "2.06",
               "2.76"
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
## Parke

### Demographics
   - Average Age: 48.32 years old
   - Population Density: 37.76 people per square mile

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
               "1060",
               "1017",
               "966",
               "948",
               "988",
               "1063",
               "1038",
               "1073",
               "969",
               "1084",
               "1218",
               "1235",
               "1225",
               "1040",
               "812",
               "609",
               "366",
               "285"
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
               "48.31",
               "51.69"
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
## Perry

### Demographics
   - Average Age: 53.35 years old
   - Population Density: 49.54 people per square mile

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
               "1071",
               "1019",
               "1369",
               "992",
               "1108",
               "1231",
               "1240",
               "1090",
               "1348",
               "1146",
               "1332",
               "1374",
               "1410",
               "1172",
               "784",
               "482",
               "444",
               "529"
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
               "53.40",
               "46.60"
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
## Pike

### Demographics
   - Average Age: 52.79 years old
   - Population Density: 36.39 people per square mile

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
               "692",
               "856",
               "727",
               "713",
               "670",
               "659",
               "640",
               "623",
               "814",
               "784",
               "918",
               "961",
               "925",
               "669",
               "722",
               "482",
               "251",
               "305"
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
               "50.41",
               "49.59"
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
## Porter

### Demographics
   - Average Age: 47.51 years old
   - Population Density: 322.14 people per square mile

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
               "9255",
               "10355",
               "10972",
               "11709",
               "11063",
               "9876",
               "10556",
               "11531",
               "10403",
               "11139",
               "11348",
               "12468",
               "11374",
               "8834",
               "6852",
               "4257",
               "2983",
               "3066"
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
               1.0,
               3.0,
               5.0,
               6.0,
               9.0,
               14.0
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
               "200.00",
               "66.67",
               "20.00",
               "50.00",
               "55.56"
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
               "0.63",
               "1.36",
               "3.80",
               "1.71",
               "1.57"
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
## Posey

### Demographics
   - Average Age: 50.26 years old
   - Population Density: 61.00 people per square mile

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
               "1419",
               "1541",
               "1628",
               "1649",
               "1411",
               "1385",
               "1469",
               "1593",
               "1450",
               "1597",
               "1883",
               "2309",
               "1795",
               "1517",
               "1116",
               "909",
               "383",
               "535"
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
               "49.97",
               "50.03"
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
               "100.00",
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
               "1.00",
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
## Pulaski

### Demographics
   - Average Age: 50.30 years old
   - Population Density: 29.13 people per square mile

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
               "663",
               "745",
               "940",
               "834",
               "657",
               "693",
               "686",
               "957",
               "553",
               "738",
               "940",
               "932",
               "972",
               "759",
               "579",
               "411",
               "339",
               "262"
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
               "50.58",
               "49.42"
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
## Putnam

### Demographics
   - Average Age: 46.82 years old
   - Population Density: 77.82 people per square mile

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
               "1795",
               "1954",
               "2183",
               "3142",
               "3700",
               "2294",
               "2132",
               "2436",
               "1891",
               "2455",
               "2698",
               "2653",
               "2310",
               "1849",
               "1437",
               "1382",
               "609",
               "639"
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
               "52.49",
               "47.51"
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
               5.0,
               5.0
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
               "100.00",
               "0.00",
               "0.00",
               "150.00",
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
               "0.76",
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
## Randolph

### Demographics
   - Average Age: 53.59 years old
   - Population Density: 55.32 people per square mile

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
               "1520",
               "1283",
               "1928",
               "1647",
               "1339",
               "1433",
               "1247",
               "1427",
               "1528",
               "1589",
               "1791",
               "1721",
               "1772",
               "1546",
               "1104",
               "1003",
               "500",
               "698"
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
               "48.93",
               "51.07"
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
## Ripley

### Demographics
   - Average Age: 48.22 years old
   - Population Density: 63.46 people per square mile

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
               "1611",
               "2093",
               "1758",
               "1984",
               "1752",
               "1506",
               "1518",
               "1618",
               "1773",
               "1902",
               "2120",
               "2232",
               "1734",
               "1286",
               "1461",
               "825",
               "722",
               "530"
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
               1.0,
               1.0,
               6.0,
               7.0,
               11.0,
               14.0,
               15.0,
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
               "500.00",
               "16.67",
               "57.14",
               "27.27",
               "7.14",
               "26.67"
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
               "0.39",
               "4.50",
               "1.53",
               "2.87",
               "10.05",
               "2.93"
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
## Rush

### Demographics
   - Average Age: 50.87 years old
   - Population Density: 40.88 people per square mile

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
               "925",
               "915",
               "1184",
               "1167",
               "988",
               "906",
               "870",
               "1045",
               "936",
               "1121",
               "1274",
               "1366",
               "1080",
               "856",
               "744",
               "531",
               "417",
               "379"
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
               "49.00",
               "51.00"
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
               3.0,
               3.0,
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
               "200.00",
               "0.00",
               "-33.33"
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
               "-1.71"
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
## Scott

### Demographics
   - Average Age: 50.65 years old
   - Population Density: 123.19 people per square mile

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
               "1420",
               "1199",
               "1816",
               "1544",
               "1410",
               "1420",
               "1359",
               "1460",
               "1510",
               "1707",
               "1758",
               "1802",
               "1484",
               "1454",
               "905",
               "645",
               "275",
               "575"
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
               "49.15",
               "50.85"
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
## Shelby

### Demographics
   - Average Age: 49.31 years old
   - Population Density: 107.47 people per square mile

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
               "2507",
               "2528",
               "3360",
               "2755",
               "2504",
               "2669",
               "2661",
               "2549",
               "2780",
               "2973",
               "3467",
               "3412",
               "3022",
               "2540",
               "1584",
               "1471",
               "696",
               "921"
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
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
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
               6.0,
               10.0,
               12.0
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
               "200.00",
               "66.67",
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
               "inf",
               "0.63",
               "1.36",
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
## Spencer

### Demographics
   - Average Age: 52.48 years old
   - Population Density: 51.15 people per square mile

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
               "1126",
               "1251",
               "1358",
               "1317",
               "1079",
               "1044",
               "1092",
               "1052",
               "1341",
               "1346",
               "1598",
               "1600",
               "1513",
               "1194",
               "1040",
               "684",
               "384",
               "507"
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
               "50.49",
               "49.51"
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
## St.Joseph

### Demographics
   - Average Age: 48.80 years old
   - Population Density: 584.07 people per square mile

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
               "17443",
               "17084",
               "18516",
               "20297",
               "20568",
               "18341",
               "17046",
               "15762",
               "16001",
               "16067",
               "16915",
               "16881",
               "17775",
               "13723",
               "9018",
               "6364",
               "4984",
               "6455"
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
               8.0,
               17.0,
               18.0,
               19.0,
               21.0,
               27.0,
               31.0,
               32.0
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
               "112.50",
               "5.88",
               "5.56",
               "10.53",
               "28.57",
               "14.81",
               "3.23"
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
               "0.92",
               "12.13",
               "12.82",
               "6.93",
               "2.76",
               "5.02",
               "21.83"
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
## Starke

### Demographics
   - Average Age: 47.96 years old
   - Population Density: 73.45 people per square mile

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
               "1278",
               "1485",
               "1590",
               "1542",
               "1271",
               "1332",
               "1230",
               "1310",
               "1414",
               "1450",
               "1610",
               "1649",
               "1797",
               "1359",
               "1058",
               "681",
               "491",
               "394"
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
               "49.27",
               "50.73"
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
               2.0,
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
               "100.00",
               "-50.00",
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
               "1.00",
               "-1.00",
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
## Steuben

### Demographics
   - Average Age: 49.95 years old
   - Population Density: 106.90 people per square mile

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
               "1924",
               "1928",
               "2022",
               "2455",
               "2494",
               "1788",
               "1729",
               "1694",
               "2017",
               "2243",
               "2489",
               "2599",
               "2607",
               "2263",
               "1666",
               "1138",
               "739",
               "679"
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
               "50.88",
               "49.12"
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
## Sullivan

### Demographics
   - Average Age: 50.63 years old
   - Population Density: 45.79 people per square mile

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
               "1050",
               "1150",
               "1224",
               "1209",
               "1283",
               "1436",
               "1334",
               "1415",
               "1364",
               "1447",
               "1557",
               "1747",
               "1083",
               "1139",
               "907",
               "622",
               "358",
               "467"
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
               "53.74",
               "46.26"
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
## Switzerland

### Demographics
   - Average Age: 48.37 years old
   - Population Density: 47.54 people per square mile

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
               "663",
               "854",
               "661",
               "713",
               "549",
               "543",
               "585",
               "718",
               "570",
               "736",
               "778",
               "646",
               "749",
               "640",
               "447",
               "405",
               "163",
               "208"
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
               "51.79",
               "48.21"
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
               "200.00"
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
               "0.63"
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
## Tippecanoe

### Demographics
   - Average Age: 40.73 years old
   - Population Density: 376.24 people per square mile

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
               "11337",
               "10834",
               "10634",
               "18592",
               "33540",
               "15007",
               "11679",
               "10794",
               "9337",
               "9299",
               "9376",
               "9371",
               "8883",
               "7199",
               "4750",
               "3648",
               "2117",
               "2897"
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
               "51.17",
               "48.83"
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
               2.0,
               2.0,
               3.0,
               4.0,
               7.0,
               8.0,
               11.0,
               11.0
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
               "50.00",
               "33.33",
               "75.00",
               "14.29",
               "37.50",
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
               "1.71",
               "2.41",
               "1.24",
               "5.19",
               "2.18",
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
## Tipton

### Demographics
   - Average Age: 55.44 years old
   - Population Density: 58.43 people per square mile

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
               "746",
               "935",
               "775",
               "997",
               "860",
               "807",
               "746",
               "875",
               "885",
               "1088",
               "1174",
               "1314",
               "996",
               "922",
               "813",
               "465",
               "379",
               "441"
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
               "50.00",
               "50.00"
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
               2.0,
               2.0,
               2.0,
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
               "100.00",
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
               "1.00",
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
## Unassigned

### Demographics
Demographics Unavailable

### COVID19
COVID19 Data Not Available
## Union

### Demographics
   - Average Age: 49.48 years old
   - Population Density: 43.28 people per square mile

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
               "424",
               "430",
               "371",
               "518",
               "387",
               "388",
               "344",
               "546",
               "268",
               "579",
               "580",
               "473",
               "547",
               "417",
               "372",
               "213",
               "162",
               "134"
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
## Vanderburgh

### Demographics
   - Average Age: 50.67 years old
   - Population Density: 769.06 people per square mile

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
               "11076",
               "11591",
               "10360",
               "11343",
               "13199",
               "13731",
               "12274",
               "10668",
               "10432",
               "10514",
               "11870",
               "12810",
               "12312",
               "9712",
               "6315",
               "4974",
               "3527",
               "4605"
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
               1.0,
               1.0,
               1.0,
               1.0,
               4.0,
               6.0,
               10.0,
               17.0
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
               "300.00",
               "50.00",
               "66.67",
               "70.00"
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
               "0.50",
               "1.71",
               "1.36",
               "1.31"
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
## Vermillion

### Demographics
   - Average Age: 51.36 years old
   - Population Density: 59.86 people per square mile

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
               "824",
               "872",
               "1060",
               "993",
               "831",
               "833",
               "785",
               "1008",
               "933",
               "1088",
               "1095",
               "1042",
               "1214",
               "1012",
               "729",
               "569",
               "330",
               "342"
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
               "50.19",
               "49.81"
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
## Vigo

### Demographics
   - Average Age: 48.32 years old
   - Population Density: 262.35 people per square mile

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
               "6290",
               "6066",
               "6066",
               "8281",
               "11894",
               "7132",
               "6447",
               "6877",
               "5741",
               "6333",
               "6710",
               "6844",
               "6318",
               "5570",
               "3990",
               "2891",
               "1811",
               "2432"
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
               "50.80",
               "49.20"
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
               2.0,
               2.0,
               3.0,
               3.0,
               3.0,
               3.0,
               4.0,
               7.0
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
               "50.00",
               "0.00",
               "0.00",
               "0.00",
               "33.33",
               "75.00"
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
               "1.71",
               "inf",
               "inf",
               "inf",
               "2.41",
               "1.24"
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
## Wabash

### Demographics
   - Average Age: 55.07 years old
   - Population Density: 75.12 people per square mile

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
               "1624",
               "1764",
               "1978",
               "2383",
               "2170",
               "1728",
               "1608",
               "1615",
               "1924",
               "1933",
               "2117",
               "2255",
               "2220",
               "1869",
               "1446",
               "1181",
               "862",
               "954"
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
               "48.58",
               "51.42"
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
## Warren

### Demographics
   - Average Age: 48.98 years old
   - Population Density: 22.49 people per square mile

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
               "459",
               "511",
               "520",
               "479",
               "399",
               "412",
               "445",
               "358",
               "582",
               "593",
               "636",
               "659",
               "568",
               "471",
               "440",
               "353",
               "233",
               "129"
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
               "50.01",
               "49.99"
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
## Warrick

### Demographics
   - Average Age: 46.78 years old
   - Population Density: 158.44 people per square mile

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
               "3451",
               "4671",
               "4101",
               "4146",
               "3144",
               "3170",
               "3545",
               "3970",
               "4086",
               "4339",
               "4355",
               "4632",
               "4005",
               "3872",
               "2319",
               "1881",
               "1257",
               "984"
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
               "49.10",
               "50.90"
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
               0.0,
               3.0,
               3.0,
               6.0,
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
               "-100.00",
               "0.00",
               "0.00",
               "100.00",
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
               "-0.00",
               "inf",
               "inf",
               "1.00",
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
## Washington

### Demographics
   - Average Age: 47.61 years old
   - Population Density: 53.87 people per square mile

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
               "1590",
               "1590",
               "2023",
               "1850",
               "1558",
               "1639",
               "1486",
               "1660",
               "1767",
               "1885",
               "2122",
               "1932",
               "2136",
               "1693",
               "1058",
               "731",
               "640",
               "467"
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
               "49.92",
               "50.08"
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
               2.0,
               2.0,
               3.0,
               4.0,
               4.0,
               5.0
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
               "100.00",
               "0.00",
               "50.00",
               "33.33",
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
               "inf",
               "1.00",
               "inf",
               "1.71",
               "2.41",
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
## Wayne

### Demographics
   - Average Age: 52.73 years old
   - Population Density: 164.73 people per square mile

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
               "3856",
               "3885",
               "4391",
               "4418",
               "4372",
               "3757",
               "3791",
               "3910",
               "3807",
               "4189",
               "4658",
               "4420",
               "4792",
               "3672",
               "3091",
               "2253",
               "1568",
               "1783"
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
               "48.47",
               "51.53"
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
               0.0,
               0.0,
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
               "-100.00",
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
               "-0.00",
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
## Wells

### Demographics
   - Average Age: 52.97 years old
   - Population Density: 75.44 people per square mile

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
               "1834",
               "1996",
               "1965",
               "1771",
               "1555",
               "1583",
               "1582",
               "1755",
               "1458",
               "1607",
               "1885",
               "2265",
               "1744",
               "1689",
               "1063",
               "850",
               "522",
               "823"
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
## White

### Demographics
   - Average Age: 53.43 years old
   - Population Density: 47.59 people per square mile

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
               "1499",
               "1624",
               "1594",
               "1484",
               "1322",
               "1354",
               "1166",
               "1433",
               "1349",
               "1475",
               "1648",
               "1751",
               "1861",
               "1599",
               "1049",
               "807",
               "531",
               "671"
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
               "50.14",
               "49.86"
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
## Whitley

### Demographics
   - Average Age: 50.90 years old
   - Population Density: 99.58 people per square mile

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
               "2032",
               "2206",
               "2241",
               "2024",
               "1884",
               "1962",
               "1886",
               "2236",
               "1872",
               "2142",
               "2373",
               "2593",
               "2424",
               "1959",
               "1411",
               "1022",
               "581",
               "801"
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
               "49.64",
               "50.36"
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
