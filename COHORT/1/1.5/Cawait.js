function kunalfn() {
    let p = new Promise(function (resolve) {
        setTimeout(function () {
            resolve("hi there");
        }, 2000)
    });
    return p;
}

async function main() {
    let value=await kunalfn()
    console.log(value);
}

main()


