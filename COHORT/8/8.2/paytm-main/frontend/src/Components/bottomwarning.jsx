import { Link } from "react-router-dom";

export function Bottomwarning({ label, buttontext, to }) {
    return <div className="flex justify-center">
        <div>
            {label}
        </div>
        <Link className="cursor-pointer underline ml-2" to={to}>
            {buttontext}
        </Link>
    </div>
}