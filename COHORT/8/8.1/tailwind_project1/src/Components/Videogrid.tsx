import { Videocards } from "./Videocards"

const Video= [{
    title: "how to learn coding in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
}, {
    title: "how to learn jumping in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
}, {
    title: "how to learn cooking in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
},{
    title: "how to learn cooking in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
},{
    title: "how to learn cooking in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
},{
    title: "how to learn cooking in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
},{
    title: "how to learn cooking in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
},{
    title: "how to learn cooking in xyz days",
    image: "image.jpg",
    iconimage: "logo.jpg",
    name: "Kunal",
    views: "22M",
    time: "2 days ago",
}]

export const Videogrid = () =>{
    return <div className="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-4">
        {Video.map(Video => <div>
            <Videocards
                title={Video.title}
                image={Video.image}
                name={Video.name}
                iconimage={Video.iconimage}
                views={Video.views}
                time={Video.time}
            ></Videocards>
            </div>)}
    </div>
}