export function Videocards(props: any){
    return <div className="p-2">
        <img src={props.image} className="rounded-xl" />
        <div className="flex items-center">
            <img className="rounded-full w-12 h-12" src={props.iconimage} />
            <div>
                {props.title}
                <div className="text-gray-400">
                    {props.name}
                </div>
                <div className="text-gray-400">
                    {props.views} || {props.time}
                </div>
            </div>
        </div>
    </div>
}