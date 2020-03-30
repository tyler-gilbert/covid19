---
categories:
- US
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- US
title: Georgia, US
chart: true
menu:
  sidebar:
    name: Georgia
    parent: US
---

- [State Overview](#state-overview)
- [County List](#county-list)

# Demographics
- Average Age: 42.94 years old
- Population Density: 173.24 people per square mile

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
               "655810",
               "697132",
               "718143",
               "721206",
               "718646",
               "727688",
               "692096",
               "690300",
               "682251",
               "704947",
               "702308",
               "656064",
               "578604",
               "481669",
               "353555",
               "234522",
               "149164",
               "133379"
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
               "48.67",
               "51.33"
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
               2.0,
               2.0,
               2.0,
               3.0,
               6.0,
               5.0,
               10.0,
               17.0,
               23.0,
               31.0,
               42.0,
               66.0,
               99.0,
               121.0,
               146.0,
               199.0,
               287.0,
               420.0,
               507.0,
               621.0,
               772.0,
               1026.0,
               1247.0,
               1525.0,
               2000.0,
               2366.0,
               2651.0
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
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               3.0,
               10.0,
               13.0,
               14.0,
               25.0,
               25.0,
               32.0,
               40.0,
               48.0,
               64.0,
               69.0,
               80.0
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
               "0.00",
               "50.00",
               "100.00",
               "-16.67",
               "100.00",
               "70.00",
               "35.29",
               "34.78",
               "35.48",
               "57.14",
               "50.00",
               "22.22",
               "20.66",
               "36.30",
               "44.22",
               "46.34",
               "20.71",
               "22.49",
               "24.32",
               "32.90",
               "21.54",
               "22.29",
               "31.15",
               "18.30",
               "12.05"
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
               "200.00",
               "233.33",
               "30.00",
               "7.69",
               "78.57",
               "0.00",
               "28.00",
               "25.00",
               "20.00",
               "33.33",
               "7.81",
               "15.94"
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
               "inf",
               "1.71",
               "1.00",
               "-3.80",
               "1.00",
               "1.31",
               "2.29",
               "2.32",
               "2.28",
               "1.53",
               "1.71",
               "3.45",
               "3.69",
               "2.24",
               "1.89",
               "1.82",
               "3.68",
               "3.42",
               "3.18",
               "2.44",
               "3.55",
               "3.44",
               "2.56",
               "4.12",
               "6.09"
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
               "0.63",
               "0.58",
               "2.64",
               "9.35",
               "1.20",
               "inf",
               "2.81",
               "3.11",
               "3.80",
               "2.41",
               "9.21",
               "4.69"
            ]
         }
      ]
   }
}
```

> The above plot shows how long the disease takes to double. This number needs consistently above 14 to halt the spread of the disease. Holes in the data mean the measurement was the same from the previous day (so it would take forever to double.

# County List

- [Appling](#appling)
- [Atkinson](#atkinson)
- [Bacon](#bacon)
- [Baker](#baker)
- [Baldwin](#baldwin)
- [Banks](#banks)
- [Barrow](#barrow)
- [Bartow](#bartow)
- [BenHill](#benhill)
- [Berrien](#berrien)
- [Bibb](#bibb)
- [Bleckley](#bleckley)
- [Brantley](#brantley)
- [Brooks](#brooks)
- [Bryan](#bryan)
- [Bulloch](#bulloch)
- [Burke](#burke)
- [Butts](#butts)
- [Calhoun](#calhoun)
- [Camden](#camden)
- [Candler](#candler)
- [Carroll](#carroll)
- [Catoosa](#catoosa)
- [Charlton](#charlton)
- [Chatham](#chatham)
- [Chattahoochee](#chattahoochee)
- [Chattooga](#chattooga)
- [Cherokee](#cherokee)
- [Clarke](#clarke)
- [Clay](#clay)
- [Clayton](#clayton)
- [Clinch](#clinch)
- [Cobb](#cobb)
- [Coffee](#coffee)
- [Colquitt](#colquitt)
- [Columbia](#columbia)
- [Cook](#cook)
- [Coweta](#coweta)
- [Crawford](#crawford)
- [Crisp](#crisp)
- [Dade](#dade)
- [Dawson](#dawson)
- [DeKalb](#dekalb)
- [Decatur](#decatur)
- [Dodge](#dodge)
- [Dooly](#dooly)
- [Dougherty](#dougherty)
- [Douglas](#douglas)
- [Early](#early)
- [Echols](#echols)
- [Effingham](#effingham)
- [Elbert](#elbert)
- [Emanuel](#emanuel)
- [Evans](#evans)
- [Fannin](#fannin)
- [Fayette](#fayette)
- [Floyd](#floyd)
- [Forsyth](#forsyth)
- [Franklin](#franklin)
- [Fulton](#fulton)
- [Gilmer](#gilmer)
- [Glascock](#glascock)
- [Glynn](#glynn)
- [Gordon](#gordon)
- [Grady](#grady)
- [Greene](#greene)
- [Gwinnett](#gwinnett)
- [Habersham](#habersham)
- [Hall](#hall)
- [Hancock](#hancock)
- [Haralson](#haralson)
- [Harris](#harris)
- [Hart](#hart)
- [Heard](#heard)
- [Henry](#henry)
- [Houston](#houston)
- [Irwin](#irwin)
- [Jackson](#jackson)
- [Jasper](#jasper)
- [JeffDavis](#jeffdavis)
- [Jefferson](#jefferson)
- [Jenkins](#jenkins)
- [Johnson](#johnson)
- [Jones](#jones)
- [Lamar](#lamar)
- [Lanier](#lanier)
- [Laurens](#laurens)
- [Lee](#lee)
- [Liberty](#liberty)
- [Lincoln](#lincoln)
- [Long](#long)
- [Lowndes](#lowndes)
- [Lumpkin](#lumpkin)
- [Macon](#macon)
- [Madison](#madison)
- [Marion](#marion)
- [McDuffie](#mcduffie)
- [McIntosh](#mcintosh)
- [Meriwether](#meriwether)
- [Miller](#miller)
- [Mitchell](#mitchell)
- [Monroe](#monroe)
- [Montgomery](#montgomery)
- [Morgan](#morgan)
- [Murray](#murray)
- [Muscogee](#muscogee)
- [Newton](#newton)
- [Oconee](#oconee)
- [Oglethorpe](#oglethorpe)
- [Paulding](#paulding)
- [Peach](#peach)
- [Pickens](#pickens)
- [Pierce](#pierce)
- [Pike](#pike)
- [Polk](#polk)
- [Pulaski](#pulaski)
- [Putnam](#putnam)
- [Quitman](#quitman)
- [Rabun](#rabun)
- [Randolph](#randolph)
- [Richmond](#richmond)
- [Rockdale](#rockdale)
- [Schley](#schley)
- [Screven](#screven)
- [Seminole](#seminole)
- [Spalding](#spalding)
- [Stephens](#stephens)
- [Stewart](#stewart)
- [Sumter](#sumter)
- [Talbot](#talbot)
- [Taliaferro](#taliaferro)
- [Tattnall](#tattnall)
- [Taylor](#taylor)
- [Telfair](#telfair)
- [Terrell](#terrell)
- [Thomas](#thomas)
- [Tift](#tift)
- [Toombs](#toombs)
- [Towns](#towns)
- [Treutlen](#treutlen)
- [Troup](#troup)
- [Turner](#turner)
- [Twiggs](#twiggs)
- [Unassigned](#unassigned)
- [Union](#union)
- [Upson](#upson)
- [Walker](#walker)
- [Walton](#walton)
- [Ware](#ware)
- [Warren](#warren)
- [Washington](#washington)
- [Wayne](#wayne)
- [Webster](#webster)
- [Wheeler](#wheeler)
- [White](#white)
- [Whitfield](#whitfield)
- [Wilcox](#wilcox)
- [Wilkes](#wilkes)
- [Wilkinson](#wilkinson)
- [Worth](#worth)

## Appling

### Demographics
   - Average Age: 46.27 years old
   - Population Density: 36.03 people per square mile

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
               "1206",
               "1490",
               "1103",
               "1344",
               "988",
               "1059",
               "1189",
               "1086",
               "1016",
               "1087",
               "1362",
               "1313",
               "1159",
               "929",
               "921",
               "494",
               "403",
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
               "50.68",
               "49.32"
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
               "-100.00",
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
               "-0.00",
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
## Atkinson

### Demographics
   - Average Age: 39.30 years old
   - Population Density: 24.02 people per square mile

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
               "527",
               "595",
               "751",
               "717",
               "445",
               "524",
               "535",
               "529",
               "595",
               "507",
               "542",
               "529",
               "416",
               "385",
               "289",
               "191",
               "127",
               "61"
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
## Bacon

### Demographics
   - Average Age: 42.29 years old
   - Population Density: 39.27 people per square mile

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
               "809",
               "926",
               "714",
               "649",
               "701",
               "731",
               "772",
               "783",
               "746",
               "596",
               "718",
               "721",
               "662",
               "635",
               "397",
               "334",
               "214",
               "120"
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
               "49.55",
               "50.45"
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
## Baker

### Demographics
   - Average Age: 50.85 years old
   - Population Density: 9.13 people per square mile

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
               "139",
               "171",
               "157",
               "216",
               "191",
               "214",
               "157",
               "134",
               "159",
               "197",
               "261",
               "197",
               "258",
               "250",
               "257",
               "128",
               "49",
               "54"
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
               0.0,
               0.0,
               2.0,
               3.0,
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
               "50.00",
               "-66.67",
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
               "1.71",
               "-0.63",
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
## Baldwin

### Demographics
   - Average Age: 44.56 years old
   - Population Density: 169.28 people per square mile

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
               "2209",
               "2647",
               "2408",
               "4556",
               "5406",
               "2778",
               "2419",
               "2645",
               "2415",
               "2420",
               "2916",
               "3041",
               "2650",
               "2320",
               "1782",
               "1223",
               "760",
               "691"
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
               "50.26",
               "49.74"
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
## Banks

### Demographics
   - Average Age: 44.97 years old
   - Population Density: 79.14 people per square mile

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
               "970",
               "1234",
               "1204",
               "1247",
               "1034",
               "1058",
               "1057",
               "1200",
               "1211",
               "1332",
               "1373",
               "1432",
               "1072",
               "1115",
               "894",
               "549",
               "313",
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
## Barrow

### Demographics
   - Average Age: 40.06 years old
   - Population Density: 472.13 people per square mile

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
               "5413",
               "5946",
               "5753",
               "5045",
               "4445",
               "5582",
               "5767",
               "5447",
               "5566",
               "5177",
               "5038",
               "4749",
               "3772",
               "3192",
               "2670",
               "1652",
               "969",
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
               1.0,
               1.0,
               1.0,
               2.0,
               4.0,
               6.0,
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
               "100.00",
               "50.00",
               "16.67",
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
               "1.00",
               "1.71",
               "4.50",
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
## Bartow

### Demographics
   - Average Age: 43.38 years old
   - Population Density: 220.21 people per square mile

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
               "6752",
               "7219",
               "7116",
               "7008",
               "6462",
               "6992",
               "6461",
               "6769",
               "6820",
               "7508",
               "7571",
               "7611",
               "5480",
               "4745",
               "4104",
               "2507",
               "1148",
               "1347"
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
               56.0,
               61.0,
               74.0,
               78.0,
               86.0,
               98.0,
               116.0,
               119.0
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
               "8.93",
               "21.31",
               "5.41",
               "10.26",
               "13.95",
               "18.37",
               "2.59"
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
               "8.10",
               "3.59",
               "13.17",
               "7.10",
               "5.31",
               "4.11",
               "27.15"
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
## BenHill

### Demographics
   - Average Age: 46.16 years old
   - Population Density: 67.52 people per square mile

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
               "1087",
               "929",
               "1588",
               "1230",
               "920",
               "1002",
               "908",
               "986",
               "1164",
               "982",
               "1245",
               "1104",
               "1228",
               "969",
               "699",
               "514",
               "322",
               "277"
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
               "46.91",
               "53.09"
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
               "100.00",
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
               "1.00",
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
## Berrien

### Demographics
   - Average Age: 49.28 years old
   - Population Density: 41.56 people per square mile

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
               "1136",
               "1300",
               "1338",
               "1126",
               "1075",
               "1200",
               "1159",
               "1264",
               "1076",
               "1258",
               "1368",
               "1387",
               "1069",
               "1209",
               "815",
               "528",
               "302",
               "415"
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
               "48.88",
               "51.12"
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
## Bibb

### Demographics
   - Average Age: 46.95 years old
   - Population Density: 601.52 people per square mile

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
               "10633",
               "10688",
               "10472",
               "10656",
               "11278",
               "11139",
               "9568",
               "9000",
               "8864",
               "9091",
               "9790",
               "9649",
               "9905",
               "7872",
               "5437",
               "3631",
               "2632",
               "3185"
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
               "46.95",
               "53.05"
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
               4.0,
               6.0,
               8.0,
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
               "100.00",
               "100.00",
               "50.00",
               "33.33",
               "25.00",
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
               "1.00",
               "1.00",
               "1.71",
               "2.41",
               "3.11",
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
## Bleckley

### Demographics
   - Average Age: 44.96 years old
   - Population Density: 58.30 people per square mile

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
               "702",
               "758",
               "787",
               "1486",
               "1181",
               "572",
               "644",
               "680",
               "640",
               "714",
               "927",
               "748",
               "788",
               "585",
               "618",
               "420",
               "337",
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
               "46.47",
               "53.53"
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
## Brantley

### Demographics
   - Average Age: 43.52 years old
   - Population Density: 41.48 people per square mile

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
               "1106",
               "1448",
               "1098",
               "1363",
               "1014",
               "1099",
               "1023",
               "869",
               "1382",
               "1283",
               "1349",
               "1446",
               "1228",
               "1073",
               "736",
               "562",
               "292",
               "190"
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
               "49.04",
               "50.96"
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
## Brooks

### Demographics
   - Average Age: 46.27 years old
   - Population Density: 31.38 people per square mile

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
               "890",
               "876",
               "988",
               "1150",
               "622",
               "1030",
               "796",
               "642",
               "1179",
               "1038",
               "1145",
               "966",
               "1321",
               "986",
               "815",
               "605",
               "400",
               "173"
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
               "48.70",
               "51.30"
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
## Bryan

### Demographics
   - Average Age: 40.19 years old
   - Population Density: 78.95 people per square mile

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
               "2585",
               "3014",
               "3125",
               "2704",
               "1893",
               "2269",
               "2555",
               "2951",
               "2762",
               "2409",
               "2206",
               "2181",
               "1578",
               "1297",
               "1022",
               "547",
               "341",
               "446"
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
               6.0,
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
               "50.00",
               "33.33",
               "50.00",
               "16.67"
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
               "1.71",
               "4.50"
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
## Bulloch

### Demographics
   - Average Age: 39.16 years old
   - Population Density: 108.55 people per square mile

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
               "4235",
               "3713",
               "4635",
               "9214",
               "11513",
               "5669",
               "4549",
               "4339",
               "3458",
               "3866",
               "4006",
               "3575",
               "3835",
               "2779",
               "2301",
               "1319",
               "921",
               "855"
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
               "49.18",
               "50.82"
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
## Burke

### Demographics
   - Average Age: 43.26 years old
   - Population Density: 27.00 people per square mile

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
               "1646",
               "1454",
               "1816",
               "1691",
               "1238",
               "1517",
               "1293",
               "1179",
               "1323",
               "1383",
               "1530",
               "1748",
               "1433",
               "1278",
               "808",
               "605",
               "327",
               "281"
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
               "47.44",
               "52.56"
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
## Butts

### Demographics
   - Average Age: 44.30 years old
   - Population Density: 124.99 people per square mile

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
               "1363",
               "1249",
               "1433",
               "1393",
               "1583",
               "1844",
               "1810",
               "1586",
               "1502",
               "1613",
               "1704",
               "1770",
               "1321",
               "1170",
               "1038",
               "707",
               "390",
               "274"
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
               "53.31",
               "46.69"
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
               3.0,
               3.0,
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
               "50.00",
               "0.00",
               "66.67",
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
               "1.71",
               "inf",
               "1.36",
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
## Calhoun

### Demographics
   - Average Age: 49.28 years old
   - Population Density: 22.67 people per square mile

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
               "206",
               "324",
               "401",
               "338",
               "415",
               "489",
               "568",
               "548",
               "529",
               "364",
               "471",
               "360",
               "481",
               "345",
               "190",
               "152",
               "117",
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
               "60.28",
               "39.72"
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
## Camden

### Demographics
   - Average Age: 38.34 years old
   - Population Density: 67.36 people per square mile

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
               "3892",
               "3650",
               "3498",
               "3525",
               "5170",
               "4701",
               "3627",
               "3128",
               "2776",
               "3059",
               "3224",
               "3489",
               "2539",
               "2539",
               "1691",
               "1151",
               "703",
               "352"
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
               "51.26",
               "48.74"
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
               "100.00",
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
               "1.00",
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
## Candler

### Demographics
   - Average Age: 45.72 years old
   - Population Density: 43.51 people per square mile

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
               "629",
               "869",
               "760",
               "805",
               "577",
               "668",
               "592",
               "748",
               "643",
               "613",
               "670",
               "786",
               "622",
               "554",
               "601",
               "351",
               "169",
               "170"
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
## Carroll

### Demographics
   - Average Age: 41.25 years old
   - Population Density: 230.27 people per square mile

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
               "7425",
               "7041",
               "8534",
               "9457",
               "10736",
               "8099",
               "7272",
               "7224",
               "7188",
               "7483",
               "7312",
               "6821",
               "6278",
               "5055",
               "4274",
               "2610",
               "1952",
               "1261"
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
               "48.65",
               "51.35"
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
               16.0,
               21.0,
               26.0,
               27.0,
               50.0,
               55.0,
               64.0,
               64.0
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
               "31.25",
               "23.81",
               "3.85",
               "85.19",
               "10.00",
               "16.36",
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
               "2.55",
               "3.25",
               "18.37",
               "1.12",
               "7.27",
               "4.57",
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
## Catoosa

### Demographics
   - Average Age: 45.00 years old
   - Population Density: 407.57 people per square mile

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
               "3634",
               "4181",
               "4652",
               "4361",
               "3886",
               "3962",
               "4055",
               "4491",
               "4347",
               "4575",
               "4607",
               "4044",
               "4385",
               "3896",
               "2729",
               "2292",
               "1389",
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
               "48.25",
               "51.75"
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
## Charlton

### Demographics
   - Average Age: 49.07 years old
   - Population Density: 16.58 people per square mile

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
               "670",
               "733",
               "698",
               "884",
               "958",
               "715",
               "823",
               "735",
               "1078",
               "828",
               "1374",
               "815",
               "745",
               "561",
               "519",
               "208",
               "375",
               "264"
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
               "57.94",
               "42.06"
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
## Chatham

### Demographics
   - Average Age: 45.44 years old
   - Population Density: 444.13 people per square mile

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
               "18665",
               "17039",
               "17147",
               "18561",
               "23540",
               "25767",
               "22148",
               "18390",
               "16562",
               "16337",
               "17336",
               "18031",
               "16123",
               "14239",
               "10531",
               "6756",
               "4819",
               "5058"
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
               "48.22",
               "51.78"
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
               9.0,
               10.0,
               15.0,
               15.0
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
               "75.00",
               "0.00",
               "28.57",
               "11.11",
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
               "1.24",
               "inf",
               "2.76",
               "6.58",
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
## Chattahoochee

### Demographics
   - Average Age: 27.18 years old
   - Population Density: 42.86 people per square mile

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
               "892",
               "692",
               "557",
               "1389",
               "2359",
               "1472",
               "863",
               "532",
               "534",
               "358",
               "253",
               "184",
               "273",
               "162",
               "107",
               "81",
               "43",
               "16"
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
               "66.61",
               "33.39"
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
## Chattooga

### Demographics
   - Average Age: 47.18 years old
   - Population Density: 79.04 people per square mile

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
               "1375",
               "1692",
               "1608",
               "1501",
               "1563",
               "1736",
               "1311",
               "1797",
               "1394",
               "1661",
               "1647",
               "1739",
               "1592",
               "1361",
               "1098",
               "882",
               "441",
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
               "51.84",
               "48.16"
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
## Cherokee

### Demographics
   - Average Age: 41.71 years old
   - Population Density: 557.36 people per square mile

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
               "14819",
               "16499",
               "18925",
               "16592",
               "13528",
               "14105",
               "14969",
               "16805",
               "17837",
               "18976",
               "17888",
               "16299",
               "13568",
               "11789",
               "8779",
               "5311",
               "2930",
               "2291"
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
               18.0,
               20.0,
               28.0,
               31.0,
               38.0,
               46.0,
               52.0,
               56.0
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
               "1700.00",
               "11.11",
               "40.00",
               "10.71",
               "22.58",
               "21.05",
               "13.04",
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
               "0.24",
               "6.58",
               "2.06",
               "6.81",
               "3.40",
               "3.63",
               "5.65",
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
               "inf",
               "inf"
            ]
         }
      ]
   }
}
```
## Clarke

### Demographics
   - Average Age: 38.91 years old
   - Population Density: 1027.31 people per square mile

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
               "6777",
               "5787",
               "6019",
               "14042",
               "22484",
               "11745",
               "8931",
               "7510",
               "6412",
               "5678",
               "5357",
               "5621",
               "5432",
               "4600",
               "3050",
               "2321",
               "1322",
               "1514"
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
               "47.55",
               "52.45"
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
               9.0,
               14.0,
               16.0,
               19.0,
               24.0,
               32.0,
               35.0,
               35.0
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
               "55.56",
               "14.29",
               "18.75",
               "26.32",
               "33.33",
               "9.38",
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
               "1.57",
               "5.19",
               "4.03",
               "2.97",
               "2.41",
               "7.73",
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
               "1.00",
               "inf"
            ]
         }
      ]
   }
}
```
## Clay

### Demographics
   - Average Age: 57.58 years old
   - Population Density: 13.83 people per square mile

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
               "147",
               "157",
               "206",
               "132",
               "169",
               "210",
               "149",
               "160",
               "167",
               "162",
               "178",
               "246",
               "237",
               "201",
               "148",
               "124",
               "114",
               "94"
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
               "49.08",
               "50.92"
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
## Clayton

### Demographics
   - Average Age: 37.04 years old
   - Population Density: 1931.29 people per square mile

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
               "21404",
               "21852",
               "22402",
               "20197",
               "20689",
               "22765",
               "19924",
               "18782",
               "18983",
               "18934",
               "18128",
               "16452",
               "13811",
               "10383",
               "6124",
               "3749",
               "2071",
               "2016"
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
               "46.92",
               "53.08"
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
               13.0,
               18.0,
               21.0,
               22.0,
               32.0,
               46.0,
               57.0,
               59.0
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
               "38.46",
               "16.67",
               "4.76",
               "45.45",
               "43.75",
               "23.91",
               "3.51"
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
               "2.13",
               "4.50",
               "14.90",
               "1.85",
               "1.91",
               "3.23",
               "20.10"
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
## Clinch

### Demographics
   - Average Age: 42.05 years old
   - Population Density: 8.18 people per square mile

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
               "565",
               "343",
               "632",
               "387",
               "318",
               "606",
               "357",
               "318",
               "465",
               "431",
               "449",
               "429",
               "420",
               "321",
               "313",
               "222",
               "100",
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
               "50.82",
               "49.18"
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
## Cobb

### Demographics
   - Average Age: 41.64 years old
   - Population Density: 2162.47 people per square mile

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
               "47657",
               "51257",
               "50152",
               "50048",
               "48751",
               "54204",
               "53723",
               "54766",
               "52538",
               "55058",
               "53033",
               "48742",
               "40011",
               "32239",
               "22302",
               "12969",
               "9320",
               "8287"
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
               3.0,
               67.0,
               79.0,
               86.0,
               101.0,
               115.0,
               144.0,
               181.0,
               222.0
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
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               2.0,
               8.0,
               9.0
            ]
         }
      ]
   }
}
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
               "200.00",
               "2133.33",
               "17.91",
               "8.86",
               "17.44",
               "13.86",
               "25.22",
               "25.69",
               "22.65"
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
               "300.00",
               "12.50"
            ]
         }
      ]
   }
}
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
               "0.63",
               "0.22",
               "4.21",
               "8.16",
               "4.31",
               "5.34",
               "3.08",
               "3.03",
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
               "0.50",
               "5.88"
            ]
         }
      ]
   }
}
```
## Coffee

### Demographics
   - Average Age: 41.88 years old
   - Population Density: 71.28 people per square mile

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
               "2914",
               "3209",
               "2618",
               "2998",
               "3315",
               "3068",
               "2810",
               "2363",
               "3172",
               "2929",
               "2934",
               "2379",
               "2524",
               "2107",
               "1542",
               "1060",
               "536",
               "483"
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
               "51.41",
               "48.59"
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
               2.0,
               2.0,
               3.0,
               3.0,
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
               "100.00",
               "0.00",
               "0.00",
               "50.00",
               "0.00",
               "166.67"
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
               "1.71",
               "inf",
               "0.71"
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
## Colquitt

### Demographics
   - Average Age: 42.86 years old
   - Population Density: 81.94 people per square mile

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
               "3195",
               "3218",
               "3691",
               "3224",
               "2839",
               "2882",
               "2947",
               "3356",
               "2466",
               "2905",
               "2928",
               "2950",
               "2301",
               "2234",
               "1727",
               "1383",
               "768",
               "592"
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
               2.0,
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
               "0.00",
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
               "inf",
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
## Columbia

### Demographics
   - Average Age: 42.52 years old
   - Population Density: 478.54 people per square mile

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
               "9373",
               "10862",
               "10838",
               "10154",
               "8726",
               "9838",
               "10527",
               "10259",
               "10347",
               "9879",
               "9962",
               "8923",
               "8901",
               "6921",
               "4734",
               "3276",
               "1935",
               "1840"
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
               "48.86",
               "51.14"
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
               4.0,
               6.0,
               10.0,
               10.0,
               12.0,
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
               "33.33",
               "50.00",
               "66.67",
               "0.00",
               "20.00",
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
               "2.41",
               "1.71",
               "1.36",
               "inf",
               "3.80",
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
## Cook

### Demographics
   - Average Age: 43.96 years old
   - Population Density: 73.68 people per square mile

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
               "1128",
               "1310",
               "1240",
               "1122",
               "1115",
               "1027",
               "1025",
               "1155",
               "1004",
               "1190",
               "1125",
               "1043",
               "1035",
               "988",
               "580",
               "544",
               "321",
               "232"
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
## Coweta

### Demographics
   - Average Age: 42.45 years old
   - Population Density: 315.05 people per square mile

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
               "8666",
               "10131",
               "10191",
               "9734",
               "8272",
               "8294",
               "8847",
               "8791",
               "10253",
               "10863",
               "10594",
               "9232",
               "8165",
               "6661",
               "5063",
               "3502",
               "1730",
               "1527"
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
               "48.70",
               "51.30"
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
               9.0,
               10.0,
               10.0,
               12.0,
               19.0,
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
               0.0,
               0.0,
               0.0,
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
               "12.50",
               "11.11",
               "0.00",
               "20.00",
               "58.33",
               "0.00",
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
               "5.88",
               "6.58",
               "inf",
               "3.80",
               "1.51",
               "inf",
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
## Crawford

### Demographics
   - Average Age: 45.91 years old
   - Population Density: 37.81 people per square mile

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
               "644",
               "523",
               "1007",
               "729",
               "662",
               "741",
               "588",
               "596",
               "853",
               "843",
               "1042",
               "1244",
               "686",
               "869",
               "563",
               "435",
               "188",
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
               "51.03",
               "48.97"
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
## Crisp

### Demographics
   - Average Age: 46.92 years old
   - Population Density: 81.24 people per square mile

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
               "1464",
               "1623",
               "1522",
               "1714",
               "1438",
               "1128",
               "1382",
               "1343",
               "1303",
               "1313",
               "1479",
               "1688",
               "1435",
               "1370",
               "991",
               "806",
               "454",
               "393"
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
               "47.49",
               "52.51"
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
               3.0,
               3.0,
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
               "0.00",
               "33.33",
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
               "inf",
               "2.41",
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
## Dade

### Demographics
   - Average Age: 49.89 years old
   - Population Density: 93.21 people per square mile

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
               "767",
               "720",
               "1044",
               "1398",
               "1205",
               "888",
               "829",
               "910",
               "1097",
               "1057",
               "1062",
               "1150",
               "1161",
               "977",
               "800",
               "547",
               "285",
               "330"
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
               "48.88",
               "51.12"
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
## Dawson

### Demographics
   - Average Age: 47.16 years old
   - Population Density: 111.53 people per square mile

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
               "1356",
               "1237",
               "1484",
               "1400",
               "1397",
               "1351",
               "1364",
               "1260",
               "1636",
               "1572",
               "1823",
               "1547",
               "1775",
               "1827",
               "1269",
               "933",
               "322",
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
               1.0,
               1.0,
               1.0,
               1.0,
               3.0,
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
               "200.00",
               "-33.33",
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
               "0.63",
               "-1.71",
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
   - Average Age: 42.22 years old
   - Population Density: 2742.99 people per square mile

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
               "52982",
               "49157",
               "45920",
               "43344",
               "48365",
               "63342",
               "60924",
               "56188",
               "51422",
               "50588",
               "49082",
               "45546",
               "40756",
               "32254",
               "21312",
               "13700",
               "8810",
               "9495"
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
               "47.35",
               "52.65"
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
               53.0,
               75.0,
               94.0,
               116.0,
               129.0,
               181.0,
               240.0,
               272.0
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
               2.0,
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
               "41.51",
               "25.33",
               "23.40",
               "11.21",
               "40.31",
               "32.60",
               "13.33"
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
               "50.00"
            ]
         }
      ]
   }
}
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
               "2.00",
               "3.07",
               "3.30",
               "6.53",
               "2.05",
               "2.46",
               "5.54"
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
               "1.71"
            ]
         }
      ]
   }
}
```
## Decatur

### Demographics
   - Average Age: 44.74 years old
   - Population Density: 43.06 people per square mile

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
               "1802",
               "1666",
               "2005",
               "1896",
               "1667",
               "1734",
               "1692",
               "1450",
               "1720",
               "1700",
               "1856",
               "1998",
               "1426",
               "1186",
               "1225",
               "714",
               "718",
               "378"
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
               "48.10",
               "51.90"
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
## Dodge

### Demographics
   - Average Age: 47.29 years old
   - Population Density: 41.57 people per square mile

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
               "1106",
               "987",
               "1379",
               "1115",
               "1404",
               "1463",
               "1240",
               "1287",
               "1505",
               "1555",
               "1499",
               "1560",
               "1279",
               "1147",
               "945",
               "638",
               "497",
               "313"
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
               "52.45",
               "47.55"
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
## Dooly

### Demographics
   - Average Age: 51.79 years old
   - Population Density: 35.01 people per square mile

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
               "665",
               "803",
               "982",
               "805",
               "711",
               "841",
               "812",
               "1097",
               "989",
               "964",
               "1005",
               "1111",
               "801",
               "726",
               "374",
               "359",
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
               "54.15",
               "45.85"
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
## Dougherty

### Demographics
   - Average Age: 44.77 years old
   - Population Density: 272.06 people per square mile

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
               "6151",
               "5876",
               "6423",
               "6956",
               "7777",
               "6565",
               "5640",
               "5630",
               "4923",
               "5058",
               "5479",
               "5479",
               "5771",
               "4845",
               "3031",
               "2001",
               "1898",
               "1546"
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
               "46.29",
               "53.71"
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
               52.0,
               64.0,
               90.0,
               109.0,
               156.0,
               193.0,
               205.0,
               239.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               6.0,
               6.0,
               6.0,
               6.0,
               6.0,
               12.0,
               13.0,
               17.0
            ]
         }
      ]
   }
}
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
               "23.08",
               "40.62",
               "21.11",
               "43.12",
               "23.72",
               "6.22",
               "16.59"
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
               "8.33",
               "30.77"
            ]
         }
      ]
   }
}
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
               "3.34",
               "2.03",
               "3.62",
               "1.93",
               "3.26",
               "11.49",
               "4.52"
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
               "8.66",
               "2.58"
            ]
         }
      ]
   }
}
```
## Douglas

### Demographics
   - Average Age: 40.21 years old
   - Population Density: 708.24 people per square mile

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
               "8958",
               "10286",
               "11214",
               "10890",
               "9249",
               "8906",
               "8730",
               "9353",
               "10790",
               "11025",
               "10393",
               "9189",
               "7272",
               "6038",
               "4066",
               "2713",
               "1456",
               "1312"
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
               "47.75",
               "52.25"
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
               7.0,
               11.0,
               17.0,
               18.0,
               27.0,
               35.0,
               37.0
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
               "75.00",
               "57.14",
               "54.55",
               "5.88",
               "50.00",
               "29.63",
               "5.71"
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
               "1.24",
               "1.53",
               "1.59",
               "12.13",
               "1.71",
               "2.67",
               "12.47"
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
## Early

### Demographics
   - Average Age: 52.58 years old
   - Population Density: 20.04 people per square mile

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
               "664",
               "771",
               "659",
               "651",
               "662",
               "606",
               "503",
               "553",
               "598",
               "744",
               "630",
               "534",
               "845",
               "664",
               "421",
               "355",
               "199",
               "289"
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
               "46.30",
               "53.70"
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
               5.0,
               7.0,
               10.0,
               15.0,
               16.0
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
               "150.00",
               "40.00",
               "42.86",
               "50.00",
               "6.67"
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
               "0.76",
               "2.06",
               "1.94",
               "1.71",
               "10.74"
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
## Echols

### Demographics
   - Average Age: 51.22 years old
   - Population Density: 9.49 people per square mile

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
               "279",
               "216",
               "334",
               "147",
               "184",
               "269",
               "300",
               "372",
               "234",
               "388",
               "206",
               "233",
               "234",
               "124",
               "142",
               "47",
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
## Effingham

### Demographics
   - Average Age: 40.33 years old
   - Population Density: 121.54 people per square mile

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
               "3936",
               "4370",
               "4593",
               "4283",
               "3442",
               "3787",
               "4121",
               "4135",
               "4168",
               "4144",
               "4153",
               "4009",
               "3029",
               "2411",
               "1825",
               "1223",
               "492",
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
               "49.78",
               "50.22"
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
               "inf"
            ]
         }
      ]
   }
}
```
## Elbert

### Demographics
   - Average Age: 50.90 years old
   - Population Density: 51.29 people per square mile

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
               "1136",
               "1301",
               "1020",
               "1106",
               "1234",
               "1071",
               "962",
               "1191",
               "1178",
               "1348",
               "1403",
               "1352",
               "1112",
               "1045",
               "815",
               "409",
               "409"
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
## Emanuel

### Demographics
   - Average Age: 43.08 years old
   - Population Density: 32.59 people per square mile

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
               "1528",
               "1400",
               "1772",
               "1689",
               "1278",
               "1505",
               "1543",
               "1395",
               "1287",
               "1279",
               "1482",
               "1646",
               "1207",
               "1154",
               "936",
               "814",
               "320",
               "264"
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
## Evans

### Demographics
   - Average Age: 47.53 years old
   - Population Density: 57.39 people per square mile

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
               "781",
               "902",
               "733",
               "632",
               "450",
               "812",
               "738",
               "696",
               "594",
               "649",
               "739",
               "663",
               "626",
               "534",
               "445",
               "236",
               "271",
               "226"
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
## Fannin

### Demographics
   - Average Age: 58.28 years old
   - Population Density: 63.67 people per square mile

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
               "993",
               "1009",
               "1480",
               "1194",
               "1160",
               "1134",
               "1009",
               "1178",
               "1302",
               "1417",
               "1768",
               "1980",
               "2344",
               "2499",
               "1778",
               "1173",
               "871",
               "636"
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
               "48.49",
               "51.51"
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
               "0.00",
               "100.00",
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
               "inf",
               "1.00",
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
## Fayette

### Demographics
   - Average Age: 48.21 years old
   - Population Density: 558.88 people per square mile

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
               "4911",
               "6354",
               "8882",
               "8848",
               "6899",
               "4842",
               "4856",
               "5256",
               "7191",
               "8251",
               "9336",
               "9249",
               "7405",
               "6766",
               "5293",
               "3294",
               "1848",
               "1888"
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
               "48.54",
               "51.46"
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
               9.0,
               10.0,
               12.0,
               12.0,
               14.0,
               19.0,
               25.0,
               26.0
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
               2.0,
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
               "11.11",
               "20.00",
               "0.00",
               "16.67",
               "35.71",
               "31.58",
               "4.00"
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
               "50.00"
            ]
         }
      ]
   }
}
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
               "6.58",
               "3.80",
               "inf",
               "4.50",
               "2.27",
               "2.53",
               "17.67"
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
               "1.71"
            ]
         }
      ]
   }
}
```
## Floyd

### Demographics
   - Average Age: 47.63 years old
   - Population Density: 186.74 people per square mile

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
               "5851",
               "5876",
               "7033",
               "7030",
               "6947",
               "6292",
               "5706",
               "5396",
               "6392",
               "6115",
               "6416",
               "6194",
               "5940",
               "4838",
               "4104",
               "2810",
               "1962",
               "1922"
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
         "2020-03-06",
         "2020-03-07",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
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
               9.0,
               10.0,
               11.0,
               14.0,
               16.0,
               20.0,
               27.0,
               27.0
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
               1.0,
               1.0,
               1.0,
               1.0,
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
         "2020-03-06",
         "2020-03-07",
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
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
               "350.00",
               "11.11",
               "10.00",
               "27.27",
               "14.29",
               "25.00",
               "35.00",
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
               "100.00"
            ]
         }
      ]
   }
}
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
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
         "2020-03-28",
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
               "0.46",
               "6.58",
               "7.27",
               "2.87",
               "5.19",
               "3.11",
               "2.31",
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
               "1.00"
            ]
         }
      ]
   }
}
```
## Forsyth

### Demographics
   - Average Age: 40.41 years old
   - Population Density: 888.83 people per square mile

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
               "13618",
               "17800",
               "19490",
               "16329",
               "10626",
               "8843",
               "12738",
               "16424",
               "19257",
               "19719",
               "16891",
               "12669",
               "10455",
               "9033",
               "6778",
               "4378",
               "2829",
               "2003"
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
               "49.69",
               "50.31"
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
               7.0,
               8.0,
               9.0,
               15.0,
               19.0,
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
               "75.00",
               "14.29",
               "12.50",
               "66.67",
               "26.67",
               "10.53",
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
               "1.24",
               "5.19",
               "5.88",
               "1.36",
               "2.93",
               "6.93",
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
## Franklin

### Demographics
   - Average Age: 48.91 years old
   - Population Density: 84.52 people per square mile

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
               "1367",
               "1259",
               "1394",
               "1609",
               "1520",
               "1382",
               "1211",
               "1273",
               "1211",
               "1520",
               "1503",
               "1613",
               "1287",
               "1417",
               "1191",
               "763",
               "569",
               "425"
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
               0.0,
               0.0,
               0.0,
               0.0,
               0.0,
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
## Fulton

### Demographics
   - Average Age: 42.03 years old
   - Population Density: 1911.56 people per square mile

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
               "62272",
               "65993",
               "63024",
               "69334",
               "74616",
               "87880",
               "82180",
               "78478",
               "69671",
               "73205",
               "68720",
               "60339",
               "52788",
               "40833",
               "28686",
               "18627",
               "12404",
               "12852"
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
               "48.45",
               "51.55"
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
               3.0,
               5.0,
               111.0,
               145.0,
               184.0,
               198.0,
               211.0,
               307.0,
               373.0,
               407.0
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
               2.0,
               2.0,
               2.0,
               2.0,
               12.0,
               13.0
            ]
         }
      ]
   }
}
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
               "0.00",
               "66.67",
               "2120.00",
               "30.63",
               "26.90",
               "7.61",
               "6.57",
               "45.50",
               "21.50",
               "9.12"
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
               "500.00",
               "8.33"
            ]
         }
      ]
   }
}
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
               "inf",
               "1.36",
               "0.22",
               "2.59",
               "2.91",
               "9.45",
               "10.90",
               "1.85",
               "3.56",
               "7.95"
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
               "0.39",
               "8.66"
            ]
         }
      ]
   }
}
```
## Gilmer

### Demographics
   - Average Age: 51.39 years old
   - Population Density: 69.29 people per square mile

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
               "1570",
               "1289",
               "1860",
               "1736",
               "1610",
               "1418",
               "1373",
               "1402",
               "1870",
               "2019",
               "2024",
               "2107",
               "2655",
               "2647",
               "1789",
               "1242",
               "808",
               "503"
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
## Glascock

### Demographics
   - Average Age: 48.82 years old
   - Population Density: 20.83 people per square mile

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
               "134",
               "208",
               "195",
               "251",
               "159",
               "141",
               "123",
               "174",
               "202",
               "262",
               "224",
               "227",
               "196",
               "133",
               "163",
               "86",
               "76",
               "55"
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
               "47.79",
               "52.21"
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
## Glynn

### Demographics
   - Average Age: 50.76 years old
   - Population Density: 144.02 people per square mile

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
               "4971",
               "5295",
               "5386",
               "5050",
               "5014",
               "5200",
               "4934",
               "4989",
               "4828",
               "5196",
               "5643",
               "6042",
               "5632",
               "5320",
               "4166",
               "2852",
               "1549",
               "1907"
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
               "46.94",
               "53.06"
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
               4.0,
               5.0,
               5.0,
               5.0,
               6.0,
               7.0,
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
               "33.33",
               "25.00",
               "0.00",
               "0.00",
               "20.00",
               "16.67",
               "14.29"
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
               "2.41",
               "3.11",
               "inf",
               "inf",
               "3.80",
               "4.50",
               "5.19"
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
## Gordon

### Demographics
   - Average Age: 43.92 years old
   - Population Density: 158.80 people per square mile

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
               "3516",
               "3625",
               "4488",
               "3876",
               "3504",
               "3592",
               "3537",
               "4008",
               "3392",
               "4171",
               "4125",
               "3631",
               "3295",
               "2607",
               "2317",
               "1350",
               "990",
               "766"
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
               "49.31",
               "50.69"
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
               5.0,
               7.0,
               8.0,
               9.0,
               12.0,
               14.0,
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
               "25.00",
               "40.00",
               "14.29",
               "12.50",
               "33.33",
               "16.67",
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
               "3.11",
               "2.06",
               "5.19",
               "5.88",
               "2.41",
               "4.50",
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
## Grady

### Demographics
   - Average Age: 47.86 years old
   - Population Density: 54.14 people per square mile

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
               "1668",
               "1575",
               "1913",
               "1450",
               "1371",
               "1703",
               "1588",
               "1236",
               "1489",
               "1638",
               "1711",
               "1894",
               "1413",
               "1398",
               "1147",
               "816",
               "438",
               "478"
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
               "48.85",
               "51.15"
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
## Greene

### Demographics
   - Average Age: 52.15 years old
   - Population Density: 41.78 people per square mile

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
               "683",
               "1014",
               "1067",
               "826",
               "723",
               "898",
               "900",
               "948",
               "682",
               "835",
               "1034",
               "1186",
               "1466",
               "1596",
               "1462",
               "935",
               "455",
               "266"
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
               0.0,
               0.0,
               1.0,
               2.0,
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
               "100.00",
               "-50.00",
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
               "-1.00",
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
## Gwinnett

### Demographics
   - Average Age: 38.26 years old
   - Population Density: 2065.98 people per square mile

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
               "61066",
               "66523",
               "75653",
               "67439",
               "58778",
               "59033",
               "61093",
               "65869",
               "67902",
               "69259",
               "65364",
               "55147",
               "45730",
               "33455",
               "21195",
               "13852",
               "8306",
               "6634"
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
               "48.88",
               "51.12"
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
               27.0,
               34.0,
               45.0,
               48.0,
               75.0,
               102.0,
               129.0,
               143.0
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
               "25.93",
               "32.35",
               "6.67",
               "56.25",
               "36.00",
               "26.47",
               "10.85"
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
               "3.01",
               "2.47",
               "10.74",
               "1.55",
               "2.25",
               "2.95",
               "6.73"
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
## Habersham

### Demographics
   - Average Age: 46.57 years old
   - Population Density: 158.62 people per square mile

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
               "2654",
               "2615",
               "3009",
               "3139",
               "3246",
               "2422",
               "2408",
               "2928",
               "2638",
               "2959",
               "2796",
               "2527",
               "2881",
               "2649",
               "2120",
               "1442",
               "1170",
               "686"
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
               "47.33",
               "52.67"
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
               "-100.00",
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
               "-0.00",
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
## Hall

### Demographics
   - Average Age: 43.19 years old
   - Population Density: 456.56 people per square mile

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
               "13011",
               "14159",
               "15051",
               "13475",
               "13149",
               "13130",
               "12277",
               "12552",
               "12561",
               "13681",
               "12960",
               "11702",
               "10495",
               "8817",
               "7722",
               "5107",
               "3454",
               "2658"
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
               9.0,
               10.0,
               14.0,
               19.0,
               21.0,
               24.0,
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
               "11.11",
               "40.00",
               "35.71",
               "10.53",
               "14.29",
               "29.17",
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
               "6.58",
               "2.06",
               "2.27",
               "6.93",
               "5.19",
               "2.71",
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
## Hancock

### Demographics
   - Average Age: 51.79 years old
   - Population Density: 17.83 people per square mile

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
               "292",
               "317",
               "389",
               "277",
               "572",
               "709",
               "582",
               "580",
               "383",
               "601",
               "654",
               "616",
               "719",
               "541",
               "578",
               "269",
               "317",
               "139"
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
               "60.84",
               "39.16"
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
## Haralson

### Demographics
   - Average Age: 46.83 years old
   - Population Density: 102.25 people per square mile

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
               "1744",
               "1716",
               "2337",
               "1885",
               "1571",
               "1861",
               "1692",
               "1363",
               "2161",
               "2323",
               "2082",
               "1675",
               "2024",
               "1536",
               "1191",
               "922",
               "372",
               "501"
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
               "48.49",
               "51.51"
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
## Harris

### Demographics
   - Average Age: 47.74 years old
   - Population Density: 71.02 people per square mile

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
               "1576",
               "1975",
               "2303",
               "2379",
               "1888",
               "1676",
               "1693",
               "2131",
               "1961",
               "2484",
               "2671",
               "2583",
               "2409",
               "1986",
               "1880",
               "1023",
               "457",
               "515"
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
## Hart

### Demographics
   - Average Age: 50.23 years old
   - Population Density: 99.95 people per square mile

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
               "1396",
               "1664",
               "1423",
               "1444",
               "1316",
               "1586",
               "1458",
               "1441",
               "1466",
               "1553",
               "1845",
               "1872",
               "1711",
               "1843",
               "1316",
               "949",
               "882",
               "466"
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
## Heard

### Demographics
   - Average Age: 48.42 years old
   - Population Density: 38.78 people per square mile

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
               "647",
               "730",
               "821",
               "767",
               "686",
               "682",
               "654",
               "666",
               "770",
               "854",
               "861",
               "852",
               "801",
               "684",
               "477",
               "326",
               "174",
               "225"
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
               "49.22",
               "50.78"
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
## Henry

### Demographics
   - Average Age: 40.46 years old
   - Population Density: 682.01 people per square mile

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
               "12905",
               "16093",
               "17542",
               "18237",
               "14351",
               "13290",
               "12938",
               "14667",
               "16755",
               "17651",
               "16748",
               "14347",
               "11475",
               "9495",
               "6316",
               "3675",
               "2734",
               "2088"
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
               "47.79",
               "52.21"
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
               7.0,
               9.0,
               13.0,
               13.0,
               25.0,
               40.0,
               50.0,
               55.0
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
               "28.57",
               "44.44",
               "0.00",
               "92.31",
               "60.00",
               "25.00",
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
               "2.76",
               "1.88",
               "inf",
               "1.06",
               "1.47",
               "3.11",
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
               "inf"
            ]
         }
      ]
   }
}
```
## Houston

### Demographics
   - Average Age: 42.02 years old
   - Population Density: 399.30 people per square mile

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
               "10239",
               "10917",
               "11289",
               "10124",
               "10192",
               "11273",
               "11168",
               "10573",
               "9181",
               "9684",
               "10698",
               "9669",
               "8187",
               "6230",
               "4594",
               "3573",
               "2187",
               "1904"
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
               "48.63",
               "51.37"
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
               9.0,
               9.0,
               12.0,
               15.0
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
               "200.00",
               "66.67",
               "80.00",
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
               "0.63",
               "1.36",
               "1.18",
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
## Irwin

### Demographics
   - Average Age: 48.69 years old
   - Population Density: 25.55 people per square mile

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
               "419",
               "625",
               "654",
               "791",
               "573",
               "460",
               "493",
               "644",
               "670",
               "561",
               "608",
               "557",
               "485",
               "546",
               "390",
               "331",
               "278",
               "183"
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
               "51.34",
               "48.66"
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
               2.0,
               2.0,
               3.0,
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
               "100.00",
               "0.00",
               "50.00",
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
               "1.71",
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
   - Average Age: 42.50 years old
   - Population Density: 191.69 people per square mile

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
               "4262",
               "4903",
               "4782",
               "4275",
               "3300",
               "4130",
               "4184",
               "4449",
               "4899",
               "4756",
               "4576",
               "4097",
               "3667",
               "3363",
               "2469",
               "1920",
               "1031",
               "692"
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
               0.0,
               0.0,
               0.0,
               1.0,
               1.0,
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
               "100.00",
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
               "1.00",
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
## Jasper

### Demographics
   - Average Age: 45.86 years old
   - Population Density: 36.90 people per square mile

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
               "787",
               "1042",
               "895",
               "921",
               "720",
               "813",
               "683",
               "597",
               "1092",
               "934",
               "980",
               "1070",
               "926",
               "823",
               "602",
               "449",
               "263",
               "187"
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
               "48.48",
               "51.52"
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
## JeffDavis

### Demographics
   - Average Age: 42.16 years old
   - Population Density: 44.69 people per square mile

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
               "1027",
               "1082",
               "1314",
               "1226",
               "637",
               "965",
               "973",
               "765",
               "1136",
               "828",
               "1007",
               "770",
               "964",
               "753",
               "766",
               "434",
               "178",
               "166"
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
   - Average Age: 48.27 years old
   - Population Density: 29.78 people per square mile

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
               "1031",
               "1063",
               "1013",
               "979",
               "1026",
               "1031",
               "935",
               "960",
               "800",
               "976",
               "1084",
               "1004",
               "1124",
               "996",
               "614",
               "503",
               "323",
               "310"
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
               "48.22",
               "51.78"
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
## Jenkins

### Demographics
   - Average Age: 50.01 years old
   - Population Density: 25.04 people per square mile

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
               "622",
               "792",
               "370",
               "355",
               "872",
               "421",
               "308",
               "382",
               "499",
               "686",
               "596",
               "701",
               "739",
               "673",
               "380",
               "133",
               "97",
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
               "45.94",
               "54.06"
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
## Johnson

### Demographics
   - Average Age: 53.31 years old
   - Population Density: 31.74 people per square mile

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
               "536",
               "592",
               "465",
               "666",
               "743",
               "544",
               "504",
               "666",
               "719",
               "620",
               "626",
               "607",
               "720",
               "557",
               "471",
               "226",
               "193",
               "275"
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
               "54.66",
               "45.34"
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
   - Average Age: 45.58 years old
   - Population Density: 72.20 people per square mile

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
               "2225",
               "1769",
               "2034",
               "1494",
               "1589",
               "1555",
               "2092",
               "1687",
               "1888",
               "2170",
               "1950",
               "1865",
               "1706",
               "1185",
               "893",
               "579",
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
               "48.60",
               "51.40"
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
               "100.00",
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
               "1.00",
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
## Lamar

### Demographics
   - Average Age: 46.94 years old
   - Population Density: 99.63 people per square mile

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
               "1014",
               "878",
               "1250",
               "1923",
               "1577",
               "1036",
               "1002",
               "1144",
               "965",
               "1069",
               "1189",
               "1379",
               "1053",
               "929",
               "993",
               "381",
               "391",
               "340"
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
               "48.39",
               "51.61"
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
               3.0,
               3.0,
               3.0,
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
               "-33.33",
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
               "-1.71",
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
## Lanier

### Demographics
   - Average Age: 46.08 years old
   - Population Density: 51.87 people per square mile

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
               "715",
               "667",
               "844",
               "635",
               "673",
               "751",
               "825",
               "692",
               "705",
               "613",
               "654",
               "589",
               "684",
               "513",
               "275",
               "223",
               "94",
               "214"
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
## Laurens

### Demographics
   - Average Age: 46.10 years old
   - Population Density: 57.93 people per square mile

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
               "3161",
               "3533",
               "3098",
               "3111",
               "2917",
               "2902",
               "2756",
               "3226",
               "2497",
               "2939",
               "3157",
               "3350",
               "2787",
               "2799",
               "1713",
               "1402",
               "1298",
               "772"
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
               "47.44",
               "52.56"
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
               5.0,
               6.0,
               7.0,
               7.0,
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
               "150.00",
               "20.00",
               "16.67",
               "0.00",
               "0.00",
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
               "0.76",
               "3.80",
               "4.50",
               "inf",
               "inf",
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
## Lee

### Demographics
   - Average Age: 40.70 years old
   - Population Density: 81.07 people per square mile

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
               "2385",
               "2209",
               "2057",
               "1576",
               "1894",
               "1929",
               "2429",
               "1936",
               "2166",
               "1878",
               "1819",
               "1777",
               "1414",
               "857",
               "532",
               "421",
               "274"
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
               16.0,
               16.0,
               20.0,
               25.0,
               30.0,
               35.0,
               37.0,
               43.0
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
               5.0,
               6.0
            ]
         }
      ]
   }
}
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
               "25.00",
               "20.00",
               "16.67",
               "5.71",
               "16.22"
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
               "20.00"
            ]
         }
      ]
   }
}
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
               "3.11",
               "3.80",
               "4.50",
               "12.47",
               "4.61"
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
               "3.80"
            ]
         }
      ]
   }
}
```
## Liberty

### Demographics
   - Average Age: 33.77 years old
   - Population Density: 103.07 people per square mile

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
               "6298",
               "4666",
               "4399",
               "3694",
               "7430",
               "7089",
               "4975",
               "3291",
               "3445",
               "2912",
               "3019",
               "3087",
               "2614",
               "1934",
               "1507",
               "845",
               "584",
               "319"
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
               0.0,
               0.0,
               1.0,
               1.0,
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
## Lincoln

### Demographics
   - Average Age: 47.87 years old
   - Population Density: 30.31 people per square mile

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
               "380",
               "414",
               "435",
               "508",
               "348",
               "439",
               "311",
               "423",
               "510",
               "395",
               "557",
               "614",
               "704",
               "608",
               "459",
               "427",
               "192",
               "75"
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
               "47.22",
               "52.78"
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
               "200.00",
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
               "0.63",
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
## Long

### Demographics
   - Average Age: 35.85 years old
   - Population Density: 44.99 people per square mile

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
               "1423",
               "1756",
               "1197",
               "1326",
               "1131",
               "1514",
               "1449",
               "1821",
               "738",
               "1043",
               "1282",
               "1018",
               "857",
               "591",
               "381",
               "245",
               "288",
               "96"
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
## Lowndes

### Demographics
   - Average Age: 40.05 years old
   - Population Density: 224.38 people per square mile

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
               "8142",
               "8131",
               "6950",
               "8960",
               "15147",
               "9539",
               "7836",
               "6585",
               "6079",
               "6119",
               "6291",
               "6353",
               "5252",
               "4457",
               "3381",
               "2263",
               "1649",
               "1448"
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
               "48.84",
               "51.16"
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
               8.0,
               10.0,
               11.0,
               12.0,
               16.0,
               20.0,
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
               "25.00",
               "10.00",
               "9.09",
               "33.33",
               "25.00",
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
               "3.11",
               "7.27",
               "7.97",
               "2.41",
               "3.11",
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
## Lumpkin

### Demographics
   - Average Age: 46.17 years old
   - Population Density: 112.15 people per square mile

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
               "1369",
               "1803",
               "1519",
               "3013",
               "4204",
               "1795",
               "1635",
               "1481",
               "1794",
               "1694",
               "1964",
               "2145",
               "2198",
               "1770",
               "1621",
               "828",
               "606",
               "512"
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
               "48.67",
               "51.33"
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
               3.0,
               3.0,
               4.0,
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
               "50.00",
               "0.00",
               "33.33",
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
               "1.71",
               "inf",
               "2.41",
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
## Macon

### Demographics
   - Average Age: 47.55 years old
   - Population Density: 33.20 people per square mile

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
               "685",
               "772",
               "670",
               "859",
               "937",
               "1026",
               "865",
               "867",
               "877",
               "847",
               "933",
               "1055",
               "933",
               "826",
               "582",
               "259",
               "263",
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
               "54.47",
               "45.53"
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
## Madison

### Demographics
   - Average Age: 46.71 years old
   - Population Density: 101.19 people per square mile

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
               "1688",
               "2056",
               "1767",
               "1705",
               "1839",
               "1621",
               "1725",
               "1612",
               "2015",
               "2056",
               "2129",
               "1967",
               "2160",
               "1514",
               "1328",
               "805",
               "455",
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
               "50.20",
               "49.80"
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
               2.0,
               3.0,
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
               "50.00",
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
               "1.00",
               "1.71",
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
   - Average Age: 45.47 years old
   - Population Density: 23.08 people per square mile

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
               "629",
               "293",
               "630",
               "398",
               "548",
               "372",
               "482",
               "458",
               "584",
               "633",
               "692",
               "632",
               "575",
               "476",
               "442",
               "168",
               "63"
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
## McDuffie

### Demographics
   - Average Age: 45.08 years old
   - Population Density: 80.72 people per square mile

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
               "1459",
               "1578",
               "1452",
               "1390",
               "1316",
               "1329",
               "1316",
               "1493",
               "1004",
               "1264",
               "1429",
               "1449",
               "1423",
               "1159",
               "1033",
               "855",
               "240",
               "309"
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
               "46.51",
               "53.49"
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
## McIntosh

### Demographics
   - Average Age: 50.58 years old
   - Population Density: 24.57 people per square mile

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
               "616",
               "531",
               "845",
               "724",
               "677",
               "774",
               "696",
               "530",
               "811",
               "921",
               "1091",
               "1297",
               "1154",
               "1275",
               "907",
               "722",
               "379",
               "170"
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
               "49.83",
               "50.17"
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
## Meriwether

### Demographics
   - Average Age: 48.39 years old
   - Population Density: 41.78 people per square mile

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
               "1250",
               "1182",
               "1353",
               "1355",
               "1212",
               "1301",
               "1145",
               "1223",
               "1078",
               "1250",
               "1587",
               "1672",
               "1423",
               "1404",
               "1071",
               "779",
               "483",
               "345"
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
               "48.41",
               "51.59"
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
               3.0,
               3.0,
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
               "0.00",
               "200.00",
               "0.00",
               "66.67"
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
               "1.36"
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
## Miller

### Demographics
   - Average Age: 53.50 years old
   - Population Density: 20.57 people per square mile

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
               "329",
               "390",
               "368",
               "324",
               "231",
               "387",
               "352",
               "270",
               "396",
               "357",
               "448",
               "460",
               "280",
               "303",
               "307",
               "324",
               "160",
               "150"
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
               "48.53",
               "51.47"
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
               "100.00",
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
               "1.00",
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
## Mitchell

### Demographics
   - Average Age: 46.69 years old
   - Population Density: 43.66 people per square mile

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
               "1357",
               "1413",
               "1584",
               "1409",
               "1358",
               "1534",
               "1440",
               "1409",
               "1567",
               "1447",
               "1537",
               "1507",
               "1353",
               "1053",
               "981",
               "729",
               "364",
               "390"
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
               "52.08",
               "47.92"
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
               3.0,
               4.0,
               10.0,
               14.0,
               14.0,
               15.0
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
               "150.00",
               "40.00",
               "0.00",
               "7.14"
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
               "0.76",
               "2.06",
               "inf",
               "10.05"
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
   - Average Age: 49.88 years old
   - Population Density: 67.89 people per square mile

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
               "1415",
               "1225",
               "2002",
               "1638",
               "1679",
               "1446",
               "1581",
               "1547",
               "1743",
               "1845",
               "1999",
               "2167",
               "1987",
               "1602",
               "1247",
               "922",
               "439",
               "526"
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
               "50.35",
               "49.65"
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
               3.0,
               3.0,
               3.0,
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
               "200.00",
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
               "0.63",
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
## Montgomery

### Demographics
   - Average Age: 44.03 years old
   - Population Density: 36.53 people per square mile

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
               "481",
               "466",
               "635",
               "732",
               "754",
               "527",
               "443",
               "480",
               "667",
               "642",
               "564",
               "719",
               "476",
               "517",
               "403",
               "263",
               "165",
               "102"
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
               "51.27",
               "48.73"
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
## Morgan

### Demographics
   - Average Age: 47.32 years old
   - Population Density: 51.42 people per square mile

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
               "1011",
               "1173",
               "1159",
               "1164",
               "1190",
               "824",
               "939",
               "866",
               "931",
               "1574",
               "1304",
               "1317",
               "1334",
               "1166",
               "883",
               "737",
               "409",
               "254"
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
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
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
## Murray

### Demographics
   - Average Age: 41.56 years old
   - Population Density: 114.03 people per square mile

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
               "2462",
               "3008",
               "2693",
               "2611",
               "2520",
               "2607",
               "2383",
               "2249",
               "2858",
               "2857",
               "2854",
               "2758",
               "2122",
               "2036",
               "1561",
               "945",
               "689",
               "344"
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
               "49.35",
               "50.65"
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
## Muscogee

### Demographics
   - Average Age: 43.56 years old
   - Population Density: 889.83 people per square mile

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
               "14425",
               "13712",
               "13031",
               "12929",
               "15163",
               "17051",
               "15001",
               "13074",
               "11539",
               "11288",
               "11943",
               "12015",
               "10787",
               "8343",
               "5903",
               "4063",
               "3152",
               "3251"
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
               "48.95",
               "51.05"
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
               5.0,
               8.0,
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
               "50.00",
               "33.33",
               "25.00",
               "60.00",
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
               "1.71",
               "2.41",
               "3.11",
               "1.47",
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
## Newton

### Demographics
   - Average Age: 42.02 years old
   - Population Density: 381.42 people per square mile

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
               "6895",
               "8126",
               "8064",
               "8633",
               "6788",
               "6628",
               "6353",
               "7647",
               "6862",
               "7779",
               "7446",
               "6136",
               "6022",
               "4897",
               "3437",
               "2046",
               "1382",
               "1356"
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
               "47.51",
               "52.49"
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
               7.0,
               10.0,
               15.0,
               15.0,
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
               "25.00",
               "40.00",
               "42.86",
               "50.00",
               "0.00",
               "13.33"
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
               "2.06",
               "1.94",
               "1.71",
               "inf",
               "5.54"
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
## Oconee

### Demographics
   - Average Age: 44.88 years old
   - Population Density: 198.86 people per square mile

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
               "2008",
               "2764",
               "3139",
               "3005",
               "1917",
               "1458",
               "1884",
               "2100",
               "3026",
               "2869",
               "2670",
               "2305",
               "2515",
               "1825",
               "1541",
               "891",
               "558",
               "542"
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
               3.0,
               5.0,
               5.0,
               7.0,
               10.0,
               10.0,
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
               "66.67",
               "0.00",
               "40.00",
               "42.86",
               "0.00",
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
               "1.36",
               "inf",
               "2.06",
               "1.94",
               "inf",
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
               "inf"
            ]
         }
      ]
   }
}
```
## Oglethorpe

### Demographics
   - Average Age: 46.44 years old
   - Population Density: 33.43 people per square mile

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
               "790",
               "941",
               "869",
               "902",
               "693",
               "991",
               "731",
               "1122",
               "926",
               "1077",
               "1020",
               "1288",
               "764",
               "935",
               "674",
               "567",
               "305",
               "189"
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
## Paulding

### Demographics
   - Average Age: 38.67 years old
   - Population Density: 494.59 people per square mile

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
               "10029",
               "11534",
               "12832",
               "11400",
               "9813",
               "9847",
               "10060",
               "11799",
               "11660",
               "12811",
               "11441",
               "9899",
               "6949",
               "6042",
               "4032",
               "2882",
               "1707",
               "1103"
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
               4.0,
               5.0,
               6.0,
               6.0,
               7.0,
               12.0,
               19.0,
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
               "25.00",
               "20.00",
               "0.00",
               "16.67",
               "71.43",
               "58.33",
               "21.05"
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
               "3.11",
               "3.80",
               "inf",
               "4.50",
               "1.29",
               "1.51",
               "3.63"
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
## Peach

### Demographics
   - Average Age: 46.65 years old
   - Population Density: 178.03 people per square mile

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
               "1424",
               "1739",
               "1690",
               "2490",
               "2208",
               "1697",
               "1625",
               "1667",
               "1354",
               "1565",
               "1805",
               "2370",
               "1262",
               "1332",
               "1144",
               "623",
               "460",
               "511"
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
               "48.03",
               "51.97"
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
               5.0,
               6.0,
               6.0,
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
               "33.33",
               "25.00",
               "20.00",
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
               "2.41",
               "3.11",
               "3.80",
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
## Pickens

### Demographics
   - Average Age: 48.86 years old
   - Population Density: 132.44 people per square mile

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
               "1452",
               "1758",
               "2030",
               "1680",
               "1586",
               "1776",
               "1557",
               "1497",
               "2036",
               "2055",
               "2255",
               "2775",
               "1958",
               "2416",
               "1711",
               "1291",
               "554",
               "445"
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
               "49.41",
               "50.59"
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
               4.0,
               4.0,
               4.0,
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
               "0.00",
               "0.00",
               "0.00",
               "25.00",
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
               "inf",
               "inf",
               "inf",
               "3.11",
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
## Pierce

### Demographics
   - Average Age: 43.46 years old
   - Population Density: 55.76 people per square mile

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
               "1207",
               "1426",
               "1400",
               "1215",
               "929",
               "1060",
               "1126",
               "1448",
               "1070",
               "1302",
               "1461",
               "1185",
               "1161",
               "974",
               "938",
               "658",
               "409",
               "195"
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
## Pike

### Demographics
   - Average Age: 47.02 years old
   - Population Density: 82.40 people per square mile

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
               "877",
               "1001",
               "1502",
               "1462",
               "964",
               "1046",
               "1092",
               "926",
               "1440",
               "1365",
               "1315",
               "1286",
               "1047",
               "904",
               "685",
               "449",
               "406",
               "315"
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
## Polk

### Demographics
   - Average Age: 43.31 years old
   - Population Density: 133.33 people per square mile

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
               "2823",
               "3157",
               "2944",
               "2925",
               "2354",
               "2865",
               "2554",
               "2390",
               "2757",
               "2678",
               "2688",
               "2700",
               "2516",
               "2356",
               "1460",
               "1235",
               "695",
               "524"
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
               4.0,
               4.0,
               8.0,
               8.0,
               10.0,
               10.0,
               10.0,
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
               "300.00",
               "0.00",
               "100.00",
               "0.00",
               "25.00",
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
               "0.50",
               "inf",
               "1.00",
               "inf",
               "3.11",
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
   - Average Age: 50.41 years old
   - Population Density: 45.20 people per square mile

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
               "431",
               "498",
               "515",
               "701",
               "841",
               "746",
               "938",
               "587",
               "845",
               "807",
               "792",
               "740",
               "715",
               "716",
               "540",
               "372",
               "298",
               "213"
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
               "44.93",
               "55.07"
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
## Putnam

### Demographics
   - Average Age: 48.29 years old
   - Population Density: 59.62 people per square mile

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
               "975",
               "1611",
               "1114",
               "1260",
               "1060",
               "973",
               "1340",
               "1100",
               "1020",
               "1295",
               "1456",
               "1969",
               "1388",
               "2085",
               "1108",
               "922",
               "564",
               "263"
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
## Quitman

### Demographics
   - Average Age: 59.14 years old
   - Population Density: 14.14 people per square mile

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
               "126",
               "90",
               "137",
               "97",
               "93",
               "112",
               "228",
               "138",
               "48",
               "108",
               "108",
               "118",
               "265",
               "147",
               "151",
               "163",
               "78",
               "69"
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
               "47.50",
               "52.50"
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
## Rabun

### Demographics
   - Average Age: 57.31 years old
   - Population Density: 43.65 people per square mile

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
               "701",
               "888",
               "639",
               "835",
               "843",
               "876",
               "792",
               "680",
               "1167",
               "990",
               "1100",
               "1179",
               "1339",
               "1534",
               "1101",
               "892",
               "481",
               "420"
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
               "49.26",
               "50.74"
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
## Randolph

### Demographics
   - Average Age: 63.40 years old
   - Population Density: 16.45 people per square mile

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
               "444",
               "762",
               "408",
               "504",
               "298",
               "338",
               "315",
               "479",
               "339",
               "308",
               "352",
               "393",
               "648",
               "408",
               "302",
               "323",
               "109",
               "357"
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
               1.0,
               1.0,
               1.0,
               1.0,
               1.0,
               3.0,
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
               "200.00",
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
               "0.63",
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
## Richmond

### Demographics
   - Average Age: 42.80 years old
   - Population Density: 613.28 people per square mile

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
               "13750",
               "13466",
               "12185",
               "13791",
               "17146",
               "18290",
               "14491",
               "12350",
               "10882",
               "11027",
               "12380",
               "12400",
               "12704",
               "9385",
               "6573",
               "4452",
               "3448",
               "2743"
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
               "48.28",
               "51.72"
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
               11.0,
               11.0,
               11.0,
               10.0,
               11.0,
               12.0,
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
               "10.00",
               "0.00",
               "0.00",
               "-9.09",
               "10.00",
               "9.09",
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
               "7.27",
               "inf",
               "inf",
               "-7.27",
               "7.27",
               "7.97",
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
## Rockdale

### Demographics
   - Average Age: 43.19 years old
   - Population Density: 673.66 people per square mile

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
               "5245",
               "6302",
               "6710",
               "6697",
               "5919",
               "5192",
               "4725",
               "6158",
               "5271",
               "6386",
               "6482",
               "6130",
               "5838",
               "4501",
               "3188",
               "2186",
               "983",
               "1098"
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
               "47.12",
               "52.88"
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
               4.0,
               7.0,
               9.0,
               12.0,
               16.0,
               17.0,
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
               "100.00",
               "75.00",
               "28.57",
               "33.33",
               "33.33",
               "6.25",
               "5.88"
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
               "1.24",
               "2.76",
               "2.41",
               "2.41",
               "11.43",
               "12.13"
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
## Schley

### Demographics
   - Average Age: 47.31 years old
   - Population Density: 31.05 people per square mile

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
               "272",
               "323",
               "404",
               "371",
               "436",
               "302",
               "320",
               "295",
               "350",
               "474",
               "259",
               "294",
               "247",
               "254",
               "263",
               "133",
               "111",
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
               "48.86",
               "51.14"
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
## Screven

### Demographics
   - Average Age: 48.91 years old
   - Population Density: 21.34 people per square mile

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
               "875",
               "862",
               "742",
               "975",
               "893",
               "819",
               "765",
               "843",
               "800",
               "796",
               "988",
               "1094",
               "1066",
               "769",
               "757",
               "406",
               "277",
               "263"
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
               "48.63",
               "51.37"
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
## Seminole

### Demographics
   - Average Age: 58.20 years old
   - Population Density: 32.88 people per square mile

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
               "468",
               "570",
               "462",
               "631",
               "377",
               "308",
               "524",
               "400",
               "616",
               "420",
               "549",
               "568",
               "678",
               "530",
               "558",
               "259",
               "226",
               "293"
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
               "47.73",
               "52.27"
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
               "0.00",
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
               "inf",
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
## Spalding

### Demographics
   - Average Age: 45.97 years old
   - Population Density: 324.23 people per square mile

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
               "3967",
               "4467",
               "4392",
               "4143",
               "3837",
               "4387",
               "4016",
               "4039",
               "3838",
               "4063",
               "4353",
               "4240",
               "3925",
               "3621",
               "3169",
               "2022",
               "1245",
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
               "48.51",
               "51.49"
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
               4.0,
               5.0,
               6.0,
               11.0,
               11.0,
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
               "100.00",
               "25.00",
               "20.00",
               "83.33",
               "0.00",
               "0.00",
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
               "1.00",
               "3.11",
               "3.80",
               "1.14",
               "inf",
               "inf",
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
## Stephens

### Demographics
   - Average Age: 50.08 years old
   - Population Density: 139.36 people per square mile

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
               "1484",
               "1632",
               "1556",
               "1901",
               "1818",
               "1431",
               "1385",
               "1125",
               "1478",
               "1856",
               "1624",
               "1942",
               "1552",
               "1562",
               "1544",
               "880",
               "347",
               "559"
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
               "45.82",
               "54.18"
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
               2.0,
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
               "100.00",
               "-50.00",
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
               "1.00",
               "-1.00",
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
## Stewart

### Demographics
   - Average Age: 50.65 years old
   - Population Density: 13.04 people per square mile

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
               "212",
               "198",
               "201",
               "362",
               "515",
               "736",
               "663",
               "426",
               "426",
               "329",
               "392",
               "357",
               "313",
               "294",
               "204",
               "231",
               "38",
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
               "64.45",
               "35.55"
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
## Sumter

### Demographics
   - Average Age: 48.04 years old
   - Population Density: 61.62 people per square mile

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
               "1881",
               "2322",
               "1694",
               "2361",
               "3034",
               "1919",
               "1755",
               "1529",
               "1737",
               "1669",
               "1912",
               "1811",
               "1890",
               "1583",
               "1298",
               "784",
               "480",
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
               "47.31",
               "52.69"
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
               5.0,
               5.0,
               10.0,
               11.0,
               15.0
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
               "0.00",
               "150.00",
               "0.00",
               "100.00",
               "10.00",
               "36.36"
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
               "0.76",
               "inf",
               "1.00",
               "7.27",
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
## Talbot

### Demographics
   - Average Age: 52.24 years old
   - Population Density: 16.16 people per square mile

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
               "257",
               "270",
               "377",
               "402",
               "318",
               "287",
               "293",
               "323",
               "339",
               "352",
               "525",
               "589",
               "607",
               "474",
               "410",
               "302",
               "147",
               "106"
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
               "47.54",
               "52.46"
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
## Taliaferro

### Demographics
   - Average Age: 62.97 years old
   - Population Density: 8.52 people per square mile

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
               "58",
               "54",
               "76",
               "94",
               "92",
               "110",
               "96",
               "75",
               "148",
               "104",
               "119",
               "128",
               "100",
               "139",
               "93",
               "82",
               "32",
               "65"
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
               "50.87",
               "49.13"
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
## Tattnall

### Demographics
   - Average Age: 43.66 years old
   - Population Density: 51.92 people per square mile

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
               "1376",
               "1455",
               "1532",
               "1274",
               "1884",
               "2059",
               "2023",
               "2086",
               "1710",
               "1769",
               "1739",
               "1574",
               "1438",
               "1190",
               "891",
               "544",
               "508",
               "301"
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
               "58.72",
               "41.28"
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
               "0.00",
               "100.00",
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
               "1.00",
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
## Taylor

### Demographics
   - Average Age: 52.05 years old
   - Population Density: 21.58 people per square mile

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
               "404",
               "320",
               "654",
               "600",
               "552",
               "407",
               "335",
               "461",
               "463",
               "669",
               "537",
               "686",
               "572",
               "527",
               "368",
               "297",
               "149",
               "192"
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
               "48.16",
               "51.84"
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
## Telfair

### Demographics
   - Average Age: 49.84 years old
   - Population Density: 36.29 people per square mile

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
               "855",
               "760",
               "869",
               "849",
               "1196",
               "1248",
               "1373",
               "1284",
               "1081",
               "1111",
               "960",
               "1174",
               "979",
               "543",
               "434",
               "461",
               "303"
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
               "58.00",
               "42.00"
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
               "-100.00",
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
               "-0.00",
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
## Terrell

### Demographics
   - Average Age: 51.63 years old
   - Population Density: 26.24 people per square mile

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
               "685",
               "471",
               "596",
               "475",
               "627",
               "457",
               "495",
               "486",
               "506",
               "620",
               "685",
               "581",
               "519",
               "429",
               "232",
               "216",
               "226"
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
               "47.73",
               "52.27"
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
               5.0,
               6.0,
               6.0,
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
               "50.00",
               "0.00",
               "66.67",
               "20.00",
               "0.00",
               "66.67"
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
               "1.36",
               "3.80",
               "inf",
               "1.36"
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
## Thomas

### Demographics
   - Average Age: 48.52 years old
   - Population Density: 81.01 people per square mile

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
               "2862",
               "2863",
               "3169",
               "2808",
               "2597",
               "2712",
               "2723",
               "2479",
               "2748",
               "2827",
               "3199",
               "3151",
               "2915",
               "2743",
               "1767",
               "1593",
               "680",
               "894"
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
               "47.44",
               "52.56"
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
               6.0,
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
               "0.00",
               "200.00",
               "100.00",
               "16.67"
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
               "1.00",
               "4.50"
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
## Tift

### Demographics
   - Average Age: 43.95 years old
   - Population Density: 150.66 people per square mile

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
               "2813",
               "2709",
               "2885",
               "3358",
               "2955",
               "2750",
               "2506",
               "2556",
               "2626",
               "2350",
               "2407",
               "2608",
               "2209",
               "1843",
               "1601",
               "960",
               "737",
               "637"
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
               "48.16",
               "51.84"
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
               5.0,
               5.0,
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
               "150.00",
               "0.00",
               "120.00",
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
               "0.76",
               "inf",
               "0.88",
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
## Toombs

### Demographics
   - Average Age: 47.77 years old
   - Population Density: 73.37 people per square mile

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
               "1919",
               "1933",
               "2242",
               "1658",
               "1664",
               "1786",
               "1887",
               "1453",
               "1716",
               "1490",
               "1692",
               "1594",
               "1631",
               "1348",
               "1183",
               "852",
               "402",
               "598"
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
               "46.18",
               "53.82"
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
## Towns

### Demographics
   - Average Age: 67.12 years old
   - Population Density: 66.43 people per square mile

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
               "392",
               "345",
               "452",
               "879",
               "1016",
               "471",
               "354",
               "430",
               "385",
               "528",
               "618",
               "934",
               "729",
               "1039",
               "1080",
               "934",
               "350",
               "481"
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
               "46.72",
               "53.28"
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
## Treutlen

### Demographics
   - Average Age: 47.21 years old
   - Population Density: 33.51 people per square mile

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
               "366",
               "431",
               "452",
               "298",
               "559",
               "358",
               "450",
               "337",
               "265",
               "549",
               "606",
               "304",
               "334",
               "375",
               "173",
               "312",
               "105"
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
               "52.72",
               "47.28"
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
## Troup

### Demographics
   - Average Age: 44.12 years old
   - Population Density: 156.45 people per square mile

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
               "4560",
               "4375",
               "5461",
               "4862",
               "5092",
               "4798",
               "4544",
               "4622",
               "3917",
               "4355",
               "4683",
               "4671",
               "3941",
               "3417",
               "2529",
               "1719",
               "1179",
               "1049"
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
               "47.85",
               "52.15"
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
               6.0,
               6.0,
               10.0,
               11.0,
               9.0,
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
               "66.67",
               "10.00",
               "-18.18",
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
               "inf",
               "1.36",
               "7.27",
               "-3.45",
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
   - Average Age: 47.58 years old
   - Population Density: 27.47 people per square mile

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
               "540",
               "488",
               "586",
               "476",
               "390",
               "451",
               "460",
               "649",
               "573",
               "340",
               "509",
               "541",
               "523",
               "440",
               "441",
               "344",
               "70",
               "141"
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
               "48.27",
               "51.73"
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
               "0.00",
               "100.00",
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
               "1.00",
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
## Twiggs

### Demographics
   - Average Age: 47.76 years old
   - Population Density: 22.83 people per square mile

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
               "435",
               "484",
               "425",
               "349",
               "526",
               "446",
               "425",
               "483",
               "457",
               "413",
               "677",
               "675",
               "734",
               "701",
               "378",
               "349",
               "241",
               "86"
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
## Unassigned

### Demographics
Demographics Unavailable

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
               36.0,
               45.0,
               81.0,
               146.0,
               166.0,
               217.0,
               230.0,
               262.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               10.0,
               10.0,
               17.0,
               24.0,
               32.0,
               42.0,
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
               "25.00",
               "80.00",
               "80.25",
               "13.70",
               "30.72",
               "5.99",
               "13.91"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "0.00",
               "70.00",
               "41.18",
               "33.33",
               "31.25",
               "-95.24",
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
               "3.11",
               "1.18",
               "1.18",
               "5.40",
               "2.59",
               "11.91",
               "5.32"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(255,0,0,255)",
            "data": [
               "0.00",
               "inf",
               "1.31",
               "2.01",
               "2.41",
               "2.55",
               "-0.23",
               "inf"
            ]
         }
      ]
   }
}
```
## Union

### Demographics
   - Average Age: 61.99 years old
   - Population Density: 69.18 people per square mile

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
               "936",
               "1085",
               "1000",
               "1109",
               "942",
               "886",
               "1139",
               "883",
               "1032",
               "1214",
               "1498",
               "1663",
               "2087",
               "2383",
               "1946",
               "1275",
               "1006",
               "691"
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
               "48.51",
               "51.49"
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
## Upson

### Demographics
   - Average Age: 48.73 years old
   - Population Density: 80.01 people per square mile

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
               "1796",
               "1386",
               "1866",
               "1566",
               "1629",
               "1648",
               "1295",
               "1471",
               "1595",
               "1687",
               "1894",
               "1911",
               "1765",
               "1622",
               "1142",
               "812",
               "632",
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
               "47.69",
               "52.31"
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
               "0.00",
               "0.00",
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
               "inf",
               "inf",
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
## Walker

### Demographics
   - Average Age: 48.51 years old
   - Population Density: 154.06 people per square mile

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
               "3853",
               "4413",
               "4132",
               "4381",
               "3876",
               "4018",
               "4027",
               "4684",
               "3954",
               "4838",
               "4825",
               "4847",
               "4528",
               "3910",
               "3253",
               "2650",
               "1413",
               "1222"
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
## Walton

### Demographics
   - Average Age: 44.52 years old
   - Population Density: 273.07 people per square mile

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
               "5562",
               "6084",
               "7012",
               "6291",
               "5420",
               "5443",
               "5074",
               "5648",
               "5965",
               "6482",
               "6715",
               "6001",
               "4917",
               "4341",
               "3911",
               "2440",
               "1552",
               "1274"
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
               "48.57",
               "51.43"
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
               0.0,
               0.0,
               2.0,
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
               "-100.00",
               "0.00",
               "0.00",
               "150.00"
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
               "-0.00",
               "inf",
               "inf",
               "0.76"
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
## Ware

### Demographics
   - Average Age: 49.43 years old
   - Population Density: 39.27 people per square mile

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
               "2411",
               "2628",
               "2087",
               "2191",
               "2103",
               "2593",
               "2093",
               "2354",
               "2174",
               "2255",
               "2227",
               "2350",
               "2238",
               "1880",
               "1439",
               "1114",
               "631",
               "831"
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
         "2020-03-22",
         "2020-03-23",
         "2020-03-24",
         "2020-03-25",
         "2020-03-26",
         "2020-03-27",
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
               "0.00",
               "100.00",
               "0.00",
               "150.00"
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
               "0.76"
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
   - Average Age: 52.71 years old
   - Population Density: 18.64 people per square mile

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
               "356",
               "333",
               "184",
               "267",
               "411",
               "255",
               "303",
               "265",
               "325",
               "387",
               "439",
               "420",
               "415",
               "236",
               "245",
               "102",
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
               "46.30",
               "53.70"
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
## Washington

### Demographics
   - Average Age: 47.70 years old
   - Population Density: 29.89 people per square mile

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
               "1230",
               "1335",
               "1259",
               "1343",
               "1352",
               "1238",
               "1037",
               "1469",
               "1239",
               "1556",
               "1549",
               "1272",
               "1136",
               "864",
               "672",
               "396",
               "356"
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
               "50.64",
               "49.36"
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
## Wayne

### Demographics
   - Average Age: 44.27 years old
   - Population Density: 45.88 people per square mile

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
               "2062",
               "2076",
               "2014",
               "1996",
               "1569",
               "1942",
               "2101",
               "1751",
               "2072",
               "2040",
               "1988",
               "1870",
               "1807",
               "1426",
               "1345",
               "738",
               "561",
               "409"
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
               "50.56",
               "49.44"
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
## Webster

### Demographics
   - Average Age: 45.23 years old
   - Population Density: 12.43 people per square mile

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
               "60",
               "197",
               "267",
               "179",
               "106",
               "64",
               "169",
               "162",
               "101",
               "166",
               "237",
               "192",
               "166",
               "246",
               "142",
               "102",
               "35",
               "22"
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
               "47.99",
               "52.01"
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
## Wheeler

### Demographics
   - Average Age: 43.80 years old
   - Population Density: 26.45 people per square mile

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
               "351",
               "482",
               "465",
               "819",
               "766",
               "465",
               "467",
               "751",
               "491",
               "556",
               "433",
               "454",
               "319",
               "370",
               "191",
               "128",
               "93"
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
               "63.07",
               "36.93"
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
## White

### Demographics
   - Average Age: 52.21 years old
   - Population Density: 119.45 people per square mile

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
               "1257",
               "1764",
               "1577",
               "2062",
               "1754",
               "1544",
               "1368",
               "1370",
               "1653",
               "1997",
               "2189",
               "2390",
               "1788",
               "1911",
               "1838",
               "1215",
               "630",
               "621"
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
               "48.84",
               "51.16"
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
## Whitfield

### Demographics
   - Average Age: 42.59 years old
   - Population Density: 357.26 people per square mile

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
               "7050",
               "7987",
               "7664",
               "7450",
               "7006",
               "7274",
               "6618",
               "6578",
               "6784",
               "7065",
               "6852",
               "6253",
               "5277",
               "4476",
               "3775",
               "2711",
               "1634",
               "1395"
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
               2.0,
               2.0,
               2.0,
               4.0,
               5.0,
               6.0,
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
               "100.00",
               "25.00",
               "20.00",
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
               "1.00",
               "3.11",
               "3.80",
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
## Wilcox

### Demographics
   - Average Age: 49.84 years old
   - Population Density: 23.08 people per square mile

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
               "468",
               "536",
               "429",
               "559",
               "517",
               "582",
               "605",
               "804",
               "547",
               "593",
               "568",
               "650",
               "539",
               "513",
               "311",
               "210",
               "225",
               "190"
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
               "59.26",
               "40.74"
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
## Wilkes

### Demographics
   - Average Age: 58.90 years old
   - Population Density: 20.85 people per square mile

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
               "558",
               "539",
               "561",
               "758",
               "501",
               "473",
               "442",
               "571",
               "463",
               "592",
               "717",
               "769",
               "688",
               "664",
               "626",
               "409",
               "203",
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
               "48.26",
               "51.74"
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
## Wilkinson

### Demographics
   - Average Age: 53.09 years old
   - Population Density: 20.08 people per square mile

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
               "506",
               "566",
               "656",
               "575",
               "488",
               "477",
               "494",
               "569",
               "533",
               "492",
               "699",
               "748",
               "621",
               "544",
               "399",
               "264",
               "200",
               "247"
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
               "47.91",
               "52.09"
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
## Worth

### Demographics
   - Average Age: 47.92 years old
   - Population Density: 35.95 people per square mile

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
               "1287",
               "1496",
               "1204",
               "1241",
               "1243",
               "1296",
               "1431",
               "870",
               "1247",
               "1193",
               "1464",
               "1493",
               "1447",
               "1224",
               "1054",
               "742",
               "361",
               "363"
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
               2.0,
               3.0,
               4.0,
               4.0,
               5.0,
               7.0,
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
               "50.00",
               "33.33",
               "0.00",
               "25.00",
               "40.00",
               "14.29",
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
               "1.71",
               "2.41",
               "inf",
               "3.11",
               "2.06",
               "5.19",
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
