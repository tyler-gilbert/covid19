---
categories:
- UnitedArabEmirates
date: "2016-10-29"
layout: post
tagline: Four Tips
tags:
- UnitedArabEmirates
title: UnitedArabEmirates
chart: true
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
               4.0,
               4.0,
               4.0,
               4.0,
               5.0,
               5.0,
               5.0,
               5.0,
               5.0,
               5.0,
               7.0,
               7.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               8.0,
               9.0,
               9.0,
               9.0,
               9.0,
               9.0,
               9.0,
               13.0,
               13.0,
               13.0,
               13.0,
               13.0,
               13.0,
               19.0,
               21.0,
               21.0,
               21.0,
               27.0,
               27.0,
               29.0,
               29.0,
               45.0,
               45.0,
               45.0,
               74.0,
               74.0,
               85.0,
               85.0,
               85.0,
               98.0,
               98.0,
               98.0,
               113.0,
               140.0,
               140.0,
               153.0,
               153.0,
               198.0,
               248.0,
               333.0,
               333.0,
               405.0,
               468.0,
               570.0
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
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
               2.0,
               2.0,
               2.0,
               3.0
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
               "25.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "40.00",
               "0.00",
               "14.29",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "12.50",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "44.44",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "0.00",
               "46.15",
               "10.53",
               "0.00",
               "0.00",
               "28.57",
               "0.00",
               "7.41",
               "0.00",
               "55.17",
               "0.00",
               "0.00",
               "64.44",
               "0.00",
               "14.86",
               "0.00",
               "0.00",
               "15.29",
               "0.00",
               "0.00",
               "15.31",
               "23.89",
               "0.00",
               "9.29",
               "0.00",
               "29.41",
               "25.25",
               "34.27",
               "0.00",
               "21.62",
               "15.56",
               "21.79"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
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
               "3.11",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "2.06",
               "inf",
               "5.19",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "5.88",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.88",
               "inf",
               "inf",
               "inf",
               "inf",
               "inf",
               "1.83",
               "6.93",
               "inf",
               "inf",
               "2.76",
               "inf",
               "9.70",
               "inf",
               "1.58",
               "inf",
               "inf",
               "1.39",
               "inf",
               "5.00",
               "inf",
               "inf",
               "4.87",
               "inf",
               "inf",
               "4.87",
               "3.24",
               "inf",
               "7.81",
               "inf",
               "2.69",
               "3.08",
               "2.35",
               "inf",
               "3.54",
               "4.79",
               "3.52"
            ]
         },
         {
            "label": "Deaths",
            "backgroundColor": "rgba(255,255,255,0)",
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

> The above plot shows how long the disease takes to double. This number needs consistently above 14 to halt the spread of the disease. Holes in the data mean the measurement was the same from the previous day (so it would take forever to double.