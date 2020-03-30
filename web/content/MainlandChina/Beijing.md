---
categories:
- MainlandChina
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- MainlandChina
title: Beijing, MainlandChina
chart: true
menu:
  sidebar:
    name: Beijing
    parent: MainlandChina
---


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
         "2020-01-22",
         "2020-01-23",
         "2020-01-24",
         "2020-01-25",
         "2020-01-26",
         "2020-01-27",
         "2020-01-28",
         "2020-01-29",
         "2020-01-30",
         "2020-01-31",
         "2020-02-01",
         "2020-02-02",
         "2020-02-03",
         "2020-02-04",
         "2020-02-05",
         "2020-02-06",
         "2020-02-07",
         "2020-02-08",
         "2020-02-09",
         "2020-02-10",
         "2020-02-11",
         "2020-02-12",
         "2020-02-13",
         "2020-02-14",
         "2020-02-15",
         "2020-02-16",
         "2020-02-17",
         "2020-02-18",
         "2020-02-19",
         "2020-02-20",
         "2020-02-21",
         "2020-02-22",
         "2020-02-23",
         "2020-02-24",
         "2020-02-25",
         "2020-02-26",
         "2020-02-27",
         "2020-02-28",
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
         "2020-03-10"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               14.0,
               22.0,
               36.0,
               41.0,
               68.0,
               80.0,
               91.0,
               111.0,
               114.0,
               139.0,
               168.0,
               191.0,
               212.0,
               228.0,
               253.0,
               274.0,
               297.0,
               315.0,
               326.0,
               337.0,
               342.0,
               352.0,
               366.0,
               372.0,
               375.0,
               380.0,
               381.0,
               387.0,
               393.0,
               395.0,
               396.0,
               399.0,
               399.0,
               399.0,
               400.0,
               400.0,
               410.0,
               410.0,
               411.0,
               413.0,
               414.0,
               414.0,
               418.0,
               418.0,
               422.0,
               426.0,
               428.0,
               428.0,
               429.0
            ]
         },
         {
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
               2.0,
               2.0,
               2.0,
               3.0,
               3.0,
               3.0,
               3.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               4.0,
               5.0,
               7.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0
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
         "2020-01-22",
         "2020-01-23",
         "2020-01-24",
         "2020-01-25",
         "2020-01-26",
         "2020-01-27",
         "2020-01-28",
         "2020-01-29",
         "2020-01-30",
         "2020-01-31",
         "2020-02-01",
         "2020-02-02",
         "2020-02-03",
         "2020-02-04",
         "2020-02-05",
         "2020-02-06",
         "2020-02-07",
         "2020-02-08",
         "2020-02-09",
         "2020-02-10",
         "2020-02-11",
         "2020-02-12",
         "2020-02-13",
         "2020-02-14",
         "2020-02-15",
         "2020-02-16",
         "2020-02-17",
         "2020-02-18",
         "2020-02-19",
         "2020-02-20",
         "2020-02-21",
         "2020-02-22",
         "2020-02-23",
         "2020-02-24",
         "2020-02-25",
         "2020-02-26",
         "2020-02-27",
         "2020-02-28",
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
         "2020-03-10"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "57.14",
               "63.64",
               "13.89",
               "65.85",
               "17.65",
               "13.75",
               "21.98",
               "2.70",
               "21.93",
               "20.86",
               "13.69",
               "10.99",
               "7.55",
               "10.96",
               "8.30",
               "8.39",
               "6.06",
               "3.49",
               "3.37",
               "1.48",
               "2.92",
               "3.98",
               "1.64",
               "0.81",
               "1.33",
               "0.26",
               "1.57",
               "1.55",
               "0.51",
               "0.25",
               "0.76",
               "0.00",
               "0.00",
               "0.25",
               "0.00",
               "2.50",
               "0.00",
               "0.24",
               "0.49",
               "0.24",
               "0.00",
               "0.97",
               "0.00",
               "0.96",
               "0.95",
               "0.47",
               "0.00",
               "0.23"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
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
               "100.00",
               "0.00",
               "0.00",
               "50.00",
               "0.00",
               "0.00",
               "0.00",
               "33.33",
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
               "25.00",
               "40.00",
               "14.29",
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
         "2020-01-22",
         "2020-01-23",
         "2020-01-24",
         "2020-01-25",
         "2020-01-26",
         "2020-01-27",
         "2020-01-28",
         "2020-01-29",
         "2020-01-30",
         "2020-01-31",
         "2020-02-01",
         "2020-02-02",
         "2020-02-03",
         "2020-02-04",
         "2020-02-05",
         "2020-02-06",
         "2020-02-07",
         "2020-02-08",
         "2020-02-09",
         "2020-02-10",
         "2020-02-11",
         "2020-02-12",
         "2020-02-13",
         "2020-02-14",
         "2020-02-15",
         "2020-02-16",
         "2020-02-17",
         "2020-02-18",
         "2020-02-19",
         "2020-02-20",
         "2020-02-21",
         "2020-02-22",
         "2020-02-23",
         "2020-02-24",
         "2020-02-25",
         "2020-02-26",
         "2020-02-27",
         "2020-02-28",
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
         "2020-03-10"
      ],
      "datasets": [
         {
            "label": "Confirmed",
            "backgroundColor": "rgba(255,255,255,0)",
            "borderColor": "rgba(0,0,255,255)",
            "data": [
               "0.00",
               "1.53",
               "1.41",
               "5.33",
               "1.37",
               "4.27",
               "5.38",
               "3.49",
               "25.99",
               "3.50",
               "3.66",
               "5.40",
               "6.64",
               "9.53",
               "6.66",
               "8.69",
               "8.60",
               "11.78",
               "20.19",
               "20.89",
               "47.06",
               "24.05",
               "17.77",
               "42.63",
               "86.30",
               "52.33",
               "263.75",
               "44.36",
               "45.05",
               "136.55",
               "274.14",
               "91.84",
               "inf",
               "inf",
               "276.91",
               "inf",
               "28.07",
               "inf",
               "284.54",
               "142.79",
               "286.62",
               "inf",
               "72.09",
               "inf",
               "72.78",
               "73.47",
               "147.99",
               "inf",
               "297.01"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
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
               "1.00",
               "inf",
               "inf",
               "1.71",
               "inf",
               "inf",
               "inf",
               "2.41",
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
               "3.11",
               "2.06",
               "5.19",
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