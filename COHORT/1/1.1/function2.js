function totalmark(sub1, sub2, sub3, sub4, sub5) {
    const sum = sub1 + sub2 + sub3 + sub4 + sub5;
    return sum;
}

function calculatePercentage(totalmarks) {
    const percentage = (totalmarks / 500) * 100;
    return percentage;
}

const students = [
    {
        firstname: "kunal",
        totalmarks: {
            sub1: 80,
            sub2: 90,
            sub3: 65,
            sub4: 99,
            sub5: 35
        }
    },
    {
        firstname: "soham",
        totalmarks: {
            sub1: 75,
            sub2: 90,
            sub3: 65,
            sub4: 99,
            sub5: 59
        }
    },
    {
        firstname: "rohit",
        totalmarks: {
            sub1: 80,
            sub2: 90,
            sub3: 90,
            sub4: 99,
            sub5: 35
        }
    }
];

for (let i = 0; i < students.length; i++) {
    const totalMarks = totalmark(
        students[i].totalmarks.sub1,
        students[i].totalmarks.sub2,
        students[i].totalmarks.sub3,
        students[i].totalmarks.sub4,
        students[i].totalmarks.sub5
    );

    const percentage = calculatePercentage(totalMarks);

    if (percentage < 75) {
        console.log(`${students[i].firstname} has failed.`);
    } else {
        console.log(`${students[i].firstname} has passed.`);
    }
}
