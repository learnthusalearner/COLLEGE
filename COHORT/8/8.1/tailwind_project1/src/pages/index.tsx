import Image from "next/image";
import { Inter } from "next/font/google";
import { Videocards } from "@/Components/Videocards";
import { Videogrid } from "@/Components/Videogrid";
import { Searchbar } from "@/Components/Searchbar";
import { Appbar } from "@/Components/Appbar";

const inter = Inter({ subsets: ["latin"] });

export default function Home() {
  return (
    <div>
      <Appbar />
      <Videogrid />
    </div>
  );
}
